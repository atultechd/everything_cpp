#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
        int data;
        node *left, *right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

void deletion(int arr[], int n){

  arr[0] = arr[n-1];
  n = n-1;
  int i = 1;

  while(i < n){

    int left = arr[(2*i)-1];
    int right = arr[2*i];
    int larger = left > right ? (2*i)-1 : 2*i;

    if (arr[larger] > arr[i-1]){
      int temp = arr[larger];
      arr[larger] = arr[i-1];
      arr[i-1] = temp;

      i = larger + 1;
    }else{
      return;
    }
    
    for (int j = 0; j < n; ++j){
        cout << arr[j] << " ";
      }
      cout << endl;
  }

}

 int main(){
    int val;
    int arr[] = { 10, 5, 3, 2, 4 };
    int n = 5;
    
    deletion(arr, n);
    
    return 0;
}