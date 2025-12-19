#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,34,55,77,89,100};
    int sum = 0;
    for(int i=0;i<=5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}