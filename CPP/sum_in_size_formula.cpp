#include<iostream>
using namespace std;
int main()
{
    int arry[]={12,44,66,88,78,88,66,289,99,809};
    int n = sizeof(arry)/4;
    int sum =0;
    for(int i =0;i<n;i++)
    {
        sum+=arry[i];
    } 
    cout<<sum;
}