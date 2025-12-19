#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++;//if we write a++ so they first work and after upadate and if we write ++a so they first update and after work
    cout<<b<<endl;
    cout<<a<<endl;

    int d=10;
    int c=d--;//if we write d++ so they first work and after upadate and if we write --d so they first update and after work
    cout<<c<<endl;
    cout<<d<<endl;
}
