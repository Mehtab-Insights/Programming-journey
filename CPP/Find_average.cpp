#include <iostream>
using namespace std;

int main() {
    int div;
    cout << "Enter how many numbers: ";
    cin >> div;

    int sum = 0;
    int arry[div];

    cout << "Enter " << div << " numbers:" << endl;
    for (int i = 0; i < div; i++) {
        cin >> arry[i];
    }

    for (int j = 0; j < div; j++) {
        sum += arry[j];
    }

    // Calculate average with float division
    float averg = static_cast<float>(sum) / div;

    cout << "Average is: " << averg << endl;
    return 0;
}
