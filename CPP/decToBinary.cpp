#include<iostream>
using namespace std;
int dicToBinary(int decNum)
{
    int ans =0 , pow = 1;
    while(decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans = ans + (rem * pow);
        pow = pow *  10;
    }
    return ans; // binary form
}
int main()
{
    cout<<dicToBinary(64j);
}