
// pseudo like code.........
Given: vector<int> arr{2,5,5,6};

int i = 0;
int idx = 1;
while(idx < arr.size()){
  if(arr[idx] == arr[i]){
    idx++;
  }
  else{
    i++;
    arr[i] = arr[idx];
    idx++;
  }
}
i++;
while(i != idx){
  arr.pop_back();
  i++;
}