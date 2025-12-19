#include <iostream>
using namespace std;

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    cout << (a & b) << endl;  // AND → 1
    cout << (a | b) << endl;  // OR → 7
    cout << (a ^ b) << endl;  // XOR → 6
    cout << (~a) << endl;     // NOT → -6 (2's complement)
    cout << (a << 1) << endl; // Left shift → 10
    cout << (a >> 1) << endl; // Right shift → 2

    return 0;
}
