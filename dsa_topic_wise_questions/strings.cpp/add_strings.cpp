class Solution {

public:

    string addStrings(string num1, string num2) {

        int a = num1.size()-1;

        int b = num2.size()-1;

        int carry = 0;

        string res = "";

        while(a>=0 || b>=0 || carry){

            long sum = 0;

            if(a>=0){

                sum += (num1[a]- '0');

                a--;
            }
            if(b>=0){

                sum += (num2[b]- '0');

                b--;
            }
            sum += carry;

            carry = sum/10;

            sum = sum%10;

            res = res + to_string(sum);
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};