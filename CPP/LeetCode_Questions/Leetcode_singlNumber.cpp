#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;  // XOR operation
        }
        return ans;
    }
};

int main() {
    Solution a;
    vector<int> vec = {4, 1, 2, 1, 2};
    int result = a.singleNumber(vec);
    cout << "Single number is: " << result << endl;
    return 0;
}
