class Solution {

public:

    string decodeString(string s) {

        stack<char> stk;

        for(int i=0; i<s.size(); i++){

            if(s[i] != ']'){

                stk.push(s[i]);

            }else{

                string substrr = "";

                while(stk.top() != '['){

                    substrr = stk.top() + substrr;

                    stk.pop();
                }

                stk.pop();

                string num = "";

                while(!stk.empty() && isdigit(stk.top())){

                    num = stk.top() + num;

                    stk.pop();
                }

                int k_time = stoi(num);

                while(k_time--){

                    for(int j=0; j<substrr.size(); j++){

                        stk.push(substrr[j]);
                    }
                }
            }
        }
        
        s = "";

        while(!stk.empty()){

            s = stk.top() + s;

            stk.pop();
        }
        return s;
    }
};