#include <iostream>
#include <vector>
using namespace std;

vector<int> getNumbers() {
    vector<int> v = {10, 20, 30};
    return v;
}

int main() {
    vector<int> result = getNumbers(); // Receive vector

    // ✅ Now print using a loop
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
