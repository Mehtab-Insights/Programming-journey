#include<iostream>
using namespace std;
class tringle
{
    public:
int l;
int b;
tringle() //default constructor - no argument passed
{
   cout<<"Default constructor ";
   l=33;
   b=44;
}
tringle (int x,int y) //Parameterised constructor - argument pass
{
    cout<<"Parameterised constructor ";
    l=x;
    b=y;
}
tringle (tringle & c) // copy constructor - initialise an object by another existing object
{
    cout<<"Copy constructor ";
    l=c.l;
    b=c.b;
}
~tringle (){// Destructor
    cout<<"This is destructor "<<endl;
}
};
int main()
{
tringle a;
cout<<a.l<<" "<<a.b<<endl;
tringle b(22,44);
cout<<b.l<<" "<<b.b<<endl;
tringle c=b;
cout<<c.l<<" "<<c.b<<endl;
}