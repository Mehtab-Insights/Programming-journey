#include<iostream>
using namespace std;
class Rectangle
{
public:
int len;
int width;
int calculateArea()
{
 return len*width;
}
};
int main()
{
Rectangle a;
a.len=10;
a.width=20;
cout<<"Area: "<<a.calculateArea();
}