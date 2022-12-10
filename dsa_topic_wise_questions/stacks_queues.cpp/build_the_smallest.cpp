
// return string after removing k characters from num string such that the resultant
// string should represent lowest integer.

// Eg: num = "143729", k=2
// output: "1329"

string buildLowestNumber(string num, int k){

    stack<char> stk;

    for(int i=0; i<num.size(); i++){

        if(stk.empty()) stk.push(num[i]);

        else{
            while(!stk.empty() && k && stk.top() > num[i]){
                stk.pop();
                k--;
            }
            stk.push(num[i]);
        }
    }

    while(k){
        stk.pop(); k--;
    }

    string res = "";

    while(!stk.empty()){
        res += stk.top();
        stk.pop();
    }

    while(!res.empty() && res.back() == '0'){
        res.pop_back();
    }

    if(res.size()==0) return "0";

    reverse(res.begin(), res.end());
    
    return res;
}