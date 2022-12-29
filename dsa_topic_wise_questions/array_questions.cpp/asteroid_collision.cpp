vector<int> asteroidCollision(int N, vector<int> &a) {
     vector<int>res;
     stack<int> stk;
     for(int i=0; i<N; i++){
         if(a[i] > 0) stk.push(a[i]);
         else{
             while(!stk.empty() && stk.top() > 0 && stk.top() < abs(a[i])){
                 stk.pop();
             }
             if(stk.empty() || stk.top() < 0) stk.push(a[i]);
             if(stk.top() + a[i] == 0) stk.pop();
         }
     }
     while(!stk.empty()){
         res.push_back(stk.top());
         stk.pop();
     }
     reverse(res.begin(), res.end());
     return res;
}