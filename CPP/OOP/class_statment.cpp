#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int age;
    float gpa;
    int rollno;
    string adress;
    public:
    void setdata (string n,int a,float g,
    int r,string ad)
    {
        name = n;
        age = a;
        gpa = g;
        rollno = r;
        adress = ad;
    }
    void show()
    {
        cout<<"Student name "<<name<<endl;
        cout<<"Student Gpa "<<gpa<<endl;
        cout<<"Student age "<<age<<endl;
        cout<<"Student rollno "<<rollno<<endl;
        cout<<"Student adress "<<adress<<endl;
    }
};
int main ()
{
    Student std1,std2;
    std1.setdata("Ali",3,32,50,"Charsadda");
    std1.show();
    cout<<"Object 2 👇👇"<<endl;
    std2.setdata("Ahmad",2,25,22,"Mardan");
    std2.show();
    return 0;
}