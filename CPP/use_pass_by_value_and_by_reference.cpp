#include <iostream>
using namespace std;

// Pass by value
void byValue(int x) {
    x = 10; // This will NOT affect the original
}

// Pass by reference
void byReference(int& y) {
    y = 20; // This WILL change the original
}

int main() {
    int a = 5;

    byValue(a);
    cout << "After byValue: " << a << endl; // Output: 5

    byReference(a);
    cout << "After byReference: " << a << endl; // Output: 20

    return 0;
}
