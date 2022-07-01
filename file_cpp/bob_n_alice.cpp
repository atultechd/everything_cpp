#include <iostream>
using namespace std;
int main(){
    int arr1[3];
    int arr2[3];
    for(int i=0; i<3; i++){
        cin >> arr1[i];
    }
    for(int j=0; j<3; j++){
        cin >> arr2[j];
    }
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    for(int k=0; k<3; k++){ 
        if (arr1[k] > arr2[k]) {
            count1 += 1;
        }else if(arr1[k] == arr2[k]){
             count=0;
        } else {
            count2 += 1;
        }   
    }
    cout << count1 << " " << count2 << endl;
    return 0;
}

