// ..........Exception...........

// Exception is an unwanted or unexpected event,
// which occurs during the execution of a program,
// i.e. at run time, that disrupts the normal flow 
// of the program’s instructions.

// ..........Exception..Handling.......

// Exception handling is a process to handle runtime errors.
// We perform exception handling so, the normal flow of program
// can be maintained even after runtime errors.

// .........Syntax.........

//      try{

//          throw exception (if any)
//      }
//      catch(data-type  arg){

//          code
//      }


// ..........Example...............

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter the nos : ";
    cin >> a >> b;
    try{
        if(b==0) throw b;
        else{
            c = a/b;
            cout << "Result " << c;
        }
    }
    catch(int x){
        cout << "can't divide by " << x;
    }

    return 0;
}