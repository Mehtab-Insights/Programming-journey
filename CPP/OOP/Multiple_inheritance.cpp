#include<iostream>
using namespace std;
class parent1
{
    public:
    parent1(){
cout<<"This is parent 1 class"<<endl;
    }
};
class parent2
{
public:
parent2()
{
    cout<<"This is parent 2 class"<<endl;
}
};
class child1 : public parent1,public parent2
{
public:
child1()
{
    cout<<"This is a child 1 class "<<endl;
}
};
class child2:public parent1, public parent2
{
public:
child2()
{
    cout<<"This is a child 2 class"<<endl;
}
};
int main()
{
child2 a;
child1 b;
}