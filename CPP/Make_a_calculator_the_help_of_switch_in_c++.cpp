#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter two number which calculate it :";
    cin>>a>>b;
    cout<<"Enter also a opertor :";
    cin>>op;

    switch(op){
        case '+':
        cout<<"Result :"<<a+b;
        break;

        case '-':
        cout<<"Result :"<<a-b;
        break;

        case '*':
        cout<<"Result :"<<a*b;
        break;

        case'/':
        cout<<"Result :"<<a/b;
        default:
        cout<<"Sorry we can not calcult this 😔!";
    }
}