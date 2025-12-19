#include<iostream>
using namespace std;
class Sum
{
public:
void add(int x,int y)
{
int sum=x+y;
cout<<sum<<endl;
}
void add(int x,int y,int z)
{
    int sum=x+y+z;
    cout<<sum<<endl;
}
void add(float x,float y)
{
    float sum=x+y;
    cout<<sum<<endl;
}
};
int main()
{
    Sum a;
    a.add(10,20);
    a.add(10,20,30);
    a.add(float(1.4),float(1.6));
    return 0;
}