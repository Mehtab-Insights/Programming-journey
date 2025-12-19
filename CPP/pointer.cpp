#include <iostream>
using namespace std;

int main() {
    int X = 10;       // An integer variable
    int* p = &X;    // Pointer variable that holds the address of 'X'

    cout << "Value of X: "<<X<< endl;
    cout << "Address of X: "<<&X<< endl;
    cout << "Value stored in ptr (address of X): "<<p<< endl;
    cout << "Value pointed to by p: "<<*p<< endl;

 //   int x = 3;
 //   int *m=&x;
 //   cout<<&x<<endl;
 //   cout<<m<<endl;
 //   cout<<*m<<endl;
    return 0;
}
