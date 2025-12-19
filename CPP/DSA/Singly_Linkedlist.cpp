#include<iostream>
using namespace std;

// Class to represent a node in the linked list
class node {
    public:
    int val;          // Value of the node
    node* next;       // Pointer to the next node

    // Constructor to initialize the node with a value
    node(int data) {
        this->val = data;   // Set the value of the node
        this->next = NULL;  // Initialize the next pointer to NULL
    }
};

// Function to insert a node at the head of the linked list
void insertAthead(node* &head, int val) {
    node* new_node = new node(val);  // Create a new node with the given value
    new_node->next = head;           // Point the new node's next to the current head
    head = new_node;                 // Update the head to the new node
}

// Function to display the linked list
void display(node* &head) {
    node* temp = head;  // Temporary pointer to traverse the list
    while(temp != NULL) {
        cout << temp->val << "->";  // Print the value of each node
        temp = temp->next;          // Move to the next node
     }   
    cout << "NULL" << endl;  // Print NULL at the end of the list
}

int main() {
    node* head = NULL;  // Initialize an empty linked list
    insertAthead(head, 1);  // Insert a node with value 1 at the head
    display(head);  // Display the linked list
    return 0;
}
