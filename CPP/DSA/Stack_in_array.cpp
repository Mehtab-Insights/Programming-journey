#include<iostream>
#define n 100
using namespace std;
class stack{
    int* arr;
    int top;
    public:

    stack(){
    arr = new int [n];
    top=-1;
    }

    void push(int val)
    {
        if(top == n-1){
            cout<<"Stack is overFlow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top == -1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top ==-1;
    }
};
int main()
{
    stack a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    cout<<a.Top()<<endl;
    a.pop();
    cout<<a.Top()<<endl;
    a.pop();
    a.pop();
    a.pop();
}