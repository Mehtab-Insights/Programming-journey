#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int age;
~student()// Destructor
{
    cout<<"this is also distructor"<<endl;;
}
};
int main()
{
    student a,b;
    a.name="khan";
    a.age=18;
    b.name="Ali";
    b.age=180;
    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<b.name<<endl;
    cout<<b.age<<endl;
    return 0;
}