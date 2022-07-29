bool findOverlap(string &s){

    int n = s.size();

    string a = "AB";

    string b = "BA";

    int temp[2] = {0,0};

    int i=0;

    while(i<n-1){

        if(s.substr(i, 2)==a) {

            temp[0] = 1;

            i += 2;

        }else if(s.substr(i,2)==b){

            temp[1] = 1;

            i += 2;
            
        }else i++;
    }

    if(temp[0] == 1 && temp[1] == 1) return true;
    
    return false;
}