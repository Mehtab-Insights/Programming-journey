#include<iostream>
using namespace std;
class Student
{
    public:
string name;
int age;
string gender;
};
int main()
{
Student a;
a.name="Sameer";
a.age=20;
a.gender="Male";
cout<<a.name<<endl;
cout<<a.age<<endl;
cout<<a.gender<<endl;
}