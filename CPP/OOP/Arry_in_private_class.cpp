#include<iostream>
using namespace std;

class test
{
    private:
        string name;
        int age;
    public:
        void set(string n, int a)
        {
            name = n;
            age = a;
        }
        void info()
        {
            cout << "The name is " << name << endl;
            cout << "The age is " << age << endl;
        }
};
int main()
{
    test a[2];
    for(int i = 0; i < 2; i++)
    {
        string name;
        int age;
        cout << "Enter name ";
        cin >> name;
        cout << "Enter age ";
        cin >> age;
        a[i].set(name, age);
    }
    for(int j = 0; j < 2; j++)
    {
        a[j].info();
    }
    return 0;
}