#include<bits/stdc++.h>

// using inbuilt function reverse
void reverseArray(vector<int> &arr , int m){

    reverse(arr.begin()+m+1, arr.end());
}

// ....................................................

// using swap
void reverseArray(vector<int> &arr , int m){

    int start = m+1;

    int end = arr.size()-1;

    while(start<end){

        int temp = arr[start];

        arr[start] = arr[end];

        arr[end] = temp;

        start++;
        
        end--;
    }
}
