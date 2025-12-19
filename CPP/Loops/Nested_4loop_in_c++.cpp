#include<iostream>
using namespace std;
int main ()
{
    int u;
    cout<<"Enter a number : ";
    cin>>u;
    for(int i=1;i<=u;i++){      // This is for column also this is outerloop
        for(int j=1;j<=i;j++){  // This is for row also this is inner loop
            cout<<"*";}
            cout<<endl;}
}