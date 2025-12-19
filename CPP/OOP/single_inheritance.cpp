#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
        cout<<"This is parent class"<<endl;
    }
};
class child: public parent
{
    public:
child()
{
    cout<<"child class"<<endl;
}
};
int main()
{
    child a;
    return 0;
}
