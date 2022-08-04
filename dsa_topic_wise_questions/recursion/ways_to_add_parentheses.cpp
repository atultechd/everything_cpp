class Solution {

public:

    vector<int> diffWaysToCompute(string str) {

        vector<int> ans;

        int sizee = str.size();

        for(int i=0; i<sizee; i++){

            char curr = str[i];

            if(curr=='+' || curr=='-' || curr=='*'){

                vector<int> ans1 = diffWaysToCompute(str.substr(0,i));

                vector<int> ans2 = diffWaysToCompute(str.substr(i+1));
                
                for(auto a : ans1){

                    for(auto b: ans2){

                        if(curr=='+') ans.push_back(a+b);

                        else if(curr=='-') ans.push_back(a-b);

                        else ans.push_back(a*b);
                    }
                }
            }
        }
        
        if(ans.size()==0) ans.push_back(atoi(str.c_str()));

        return ans;
    }
};