#include<iostream>
using namespace std;

// void test_match(int arr[], int n){
//   int india = 0;
//   int england = 0;
//   for (int i = 0; i < n; ++i){
//     if (arr[i] == 1){
//       india++;
//     }
//     if (arr[i] == 2){
//       england++; 
//     }
//   }
//   if (india > england){
//     cout << "INDIA" << endl;
//   }
//   else if (england > india){
//     cout << "ENGLAND" << endl;
//   }
//   else{
//     cout << "DRAW" << endl;
//   }
// }

// int main(){
//   int n = 5;
//   int arr[5];
//   for (int i = 0; i < 5; ++i){
//     cin >> arr[i];
//   }
//   test_match(arr, n);
//   return 0;
// }


int main(){
  int t;
  cin >> t;
  while(t--){
    int i, arr[5], india = 0, england = 0;
    for (int i = 0; i < 5; ++i){
      cin >> arr[i];
    }

    for (int i = 0; i < 5; ++i){
      if (arr[i] == 1){
        india++;
      }
        if (arr[i] == 2){
        england++; 
      }
    }

    if (india > england){
      cout << "INDIA" << endl;
    }
    else if (england > india){
      cout << "ENGLAND" << endl;
    }
    else{
      cout << "DRAW" << endl;
    }
    
  }
  return 0;
}
