#include<iostream>
using namespace std;
class fruit
{
    public:
string name;
string colour;
};
int main ()
{
fruit * a=new fruit();
a->name="Mango";
a->colour="yellow";
cout<<a->name<<"\n"<<a->colour<<endl;
}