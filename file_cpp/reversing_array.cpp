#include <iostream>
using namespace std;
int main() {
    int N,i = 0;
    cin >> N;
    int *ptr = new int[N];
    while(cin >> ptr[i++]);
    while(cout << ptr[--N] <<' ' && N);
    delete[] ptr;
    return 0;
}
