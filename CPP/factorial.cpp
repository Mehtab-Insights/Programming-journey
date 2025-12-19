#include<iostream>
using namespace std;
int main()
{
    int u;
    cout<<"Enetr a number :";
    cin>>u;
    int f=1;
    for(int i=1;i<=u;i++)
    {
        f*=i;
    }
    cout<<f;

}