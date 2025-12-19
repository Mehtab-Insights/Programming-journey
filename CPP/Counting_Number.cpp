#include<iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter a value: ";
    cin >> N;
    int sum = 0;
    for(int count = 1; count <= N; count++)
    {
        sum = sum + count;
        cout<<count<<" ";
    }
    cout << "The sum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
