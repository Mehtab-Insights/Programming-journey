#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int age;

    student()
    {
        name="Mehtab";
         age = 18;
    }

};
int main()
{
student a;
cout<<a.age<<endl;
cout<<a.name<<endl;
    return 0;
}