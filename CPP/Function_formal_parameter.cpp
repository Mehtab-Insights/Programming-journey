#include<iostream>
using namespace std;
int hello(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main ()
{
    int a=4;
    int b=5;
    cout<<hello(a,b)<<endl;
}