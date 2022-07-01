#include <iostream>
using namespace std;

class test{
  static int x;
public:
  static int y;

  void function(int x){
    cout << " value of static int x is " << test::x << endl;
    cout << " value of local int x is " << x << endl;
  } 
};

int test::x = 10;
int test::y = 20;

int main(){
  test obj;
  int x = 30;
  obj.function(x);
  cout << " value of global static int y is " << test::y << endl;
  return 0;
}