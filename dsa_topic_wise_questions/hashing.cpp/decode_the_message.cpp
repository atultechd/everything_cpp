class Solution {

public:

    string decodeMessage(string key, string message) {

        char ch[128] = {}, cur = 'a';

        for(auto k : key){

            if(isalpha(k) && ch[k] == 0){

                ch[k] = cur++;
            }
        }
        for(int i=0; i<message.size(); i++){
          
            message[i] = ch[message[i]] ? : message[i];
        }
        return message;
    }
};