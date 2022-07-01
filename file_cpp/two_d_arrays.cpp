#include <iostream>
using namespace std;

int main(){
  int arr2d[2][3] = {
    {1,2,3},
    {2,3,4}
  };
  for (int i = 0; i < 2; ++i){
    for (int j = 0; j < 3; ++j){
      cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    }
  }

}