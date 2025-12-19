#include<iostream>
using namespace std;

void loop(int arr[], int size, int index = 0) 
{
    if (index == size)
    {
        return;
    }
    cout << arr[index] << " ";
    loop(arr, size, index + 1);
}

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    loop(x, 10);
    return 0;
}