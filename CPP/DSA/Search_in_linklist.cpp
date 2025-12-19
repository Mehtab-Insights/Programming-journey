#include<iostream>
using namespace std;
class node {
    public:
    int val;       
    node* next;       
    node(int data) {
        this->val = data;   
        this->next = NULL;  
    }
};
void insertAthead(node* &head, int val) {
    node* new_node = new node(val); 
    new_node->next = head;           
    head = new_node;
}
void insertAtTail(node* &head,int val)
{
    node* new_node = new node(val);

    node* temp= head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    //temp has reached last node
    temp->next= new_node;
}
void display(node* &head) {
    node* temp = head;  
    while(temp != NULL) {
        cout << temp->val << "->";  
        temp = temp->next;
    }
        cout << "NULL" << endl; 
}
    bool search(node* &head,int key){
    node* temp=head;
    {
        if(temp->val==key)
        return true;
        temp=temp->next;
    }
    return false;
    }
int main() {
    node* head = NULL;  

    insertAthead(head,2);  
    display(head); 
    insertAthead(head,1);  
    display(head); 
    insertAtTail(head, 3);  
    display(head); 
    cout<< search(head,1)<<endl;
    return 0;
}
