#include<iostream>
using namespace std;
class myClass
{
private:
int x,y;
public:
void setX(int x1)
{
x=x1;
}
void setY(int y1)
{
    y=y1;
}
int getX()
{
    return x;
}
int getY()
{
    return y;
}
};
int main()
{
myClass a;
a.setX(20);
a.setY(40);
cout<<"X:"<<a.getX()<<endl<<"Y:"<<a.getY()<<endl;
}