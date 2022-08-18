
#include <bits/stdc++.h>

using namespace std;

void nextGreatest(int arr[], int n){

    int maxFromRight = arr[n-1];

    for(int i= n-1; i>=0;i--) {

      if(arr[i] < maxFromRight){

        arr[i] = maxFromRight;
      }

      else maxFromRight = arr[i];
    }
}
 
void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)

        cout << arr[i] << " ";

    cout << endl;
}

int main(){

    int arr[] = {6,7,11,4,10,8};

    int size = sizeof(arr)/sizeof(arr[0]);

    nextGreatest (arr, size);

    cout << "The modified array is: \n";

    printArray (arr, size);
    
    return (0);
}
