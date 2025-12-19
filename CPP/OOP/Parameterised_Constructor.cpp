#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    student(string n,int a)
    {
        name=n;
        age=a;
    }
};
int main()
{
student a("Mehtab",18);
cout<<a.name<<"\t"<<a.age<<endl;
    return 0;
}