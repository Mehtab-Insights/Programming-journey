#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Top part of the diamond
    for(int i = 0; i < n; i++) {
        // Spaces before first star
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Spaces between stars
            for(int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom part of the diamond
    for(int i = n - 2; i >= 0; i--) {
        // Spaces before first star
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != 0) {
            // Spaces between stars
            for(int j = 0; j < 2*i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
