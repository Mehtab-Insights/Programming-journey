#include<iostream>
using namespace std;
void hello(int a)
{
    if(a ==0)
    {
        return;
    }
    cout<<"Hello world!"<<endl;
    hello(a-1);
}
int main ()
{
    hello(10);
    return 0;
}