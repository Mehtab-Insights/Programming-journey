#include<iostream>
using namespace std;
class student
{
public:
string name;
int age;
string gender;
void info()
{
    cout<<"Student name is ";
    cout<<name<<endl;
    cout<<"Student age is ";
     cout<<age<<endl;
    cout<<"Student gender is ";
     cout<<gender<<endl;
}
};
int main ()
{
    student arr[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter name of student =";
        cin>>arr[i].name;
        cout<<"Enter age of student =";
        cin>>arr[i].age;
        cout<<"Enter gender of student =";
        cin>>arr[i].gender;
    }
    for(int j=0;j<3;j++)
    {
        arr[j].info();
    }
    return 0;
}