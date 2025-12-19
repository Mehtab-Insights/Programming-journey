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
void inserAtposition(node* &head,int val,int position)
{
    if(position==0)
    {
        insertAthead(head,val);
        return;
    }
    node* new_node =new node(val);
    node* temp=head;
    int current_position = 0;
    while(current_position!=position-1)
    {
        temp=temp->next;
        current_position++;
    }
    new_node->next=temp->next;
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
int main() {
    node* head = NULL;  

    insertAthead(head,2);  
    display(head); 
    insertAthead(head,1);  
    display(head); 
    insertAtTail(head, 3);  
    display(head); 
    inserAtposition(head,8,1);
    display(head);
    return 0;
}
