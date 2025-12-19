#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int data){
        this->val=data;
        this->next=NULL;
    }
};
int main(){
node *a = new node(33);
cout<<a->val<<endl;
cout<<a->next<<endl;
}