#include <iostream>
#include <vector>
using namespace std;

#define  MAX 100

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

void insertion(int arr[], int n, int val){
  n = n + 1;
  arr[n-1] = val;
  int i = n;
  while(i > 1){
    int parent = i/2;
    if (arr[parent-1] < arr[i-1]){
      int temp = arr[i-1];
      arr[i-1] = arr[parent-1];
      arr[parent-1] = temp;
      i = parent;
    }else{
      return;
    }

  }
  for (int j = 0; j < n; ++j)
  {
    cout << arr[j] << " ";
  }
  cout << endl;
}
 

int main(){
    int val;
    int arr[MAX] = { 10, 5, 3, 2, 4 };
    int n = 5;
    
    cin >> val;

    insertion(arr, n, val);
 
    return 0;
}