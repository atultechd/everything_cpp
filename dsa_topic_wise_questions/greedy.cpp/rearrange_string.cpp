#include<bits/stdc++.h>

char find_max_occur_char(vector<int> count){

    int maxi = 0;

    char max_char = 'a';

    for(int i=0; i<26; i++){

        if(maxi < count[i]){

            maxi = count[i];

            max_char = 'a' + i;
        }
    }
    return max_char;
}

string rearrangeString(string &str) {

    vector<int> count(26, 0);

    int n = str.size();

    if(n == 0) return "NO SOLUTION";

    for(int i=0; i<n; i++){

        char ch = str[i];

        int pos = ch-'a';

        count[pos] = count[pos] + 1;
    }

    char max_occur_char = find_max_occur_char(count);

    int max_char_count = count[max_occur_char-'a'];
    
    if(max_char_count > (n+1)/2) return "NO SOLUTION";
    
    int index = 0;

    string res(n, ' ');

    while(max_char_count > 0){

        res[index] = max_occur_char;

        index += 2;

        max_char_count--;
    }

    count[max_occur_char - 'a'] = 0;

    for(int i=0; i<26; i++){

        while(count[i] > 0){

            if(index >= n) index = 1;

            res[index] = 'a' + i;

            index += 2;

            count[i]--;
        }
    }
    
    return res;
}