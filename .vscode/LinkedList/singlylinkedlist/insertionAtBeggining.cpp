#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtBegin(int data)
{
    Node *newNode = new Node(); // creating a new node
    newNode->data = data;       // set new node data
    newNode->next = head;       // set new node next as head
    head = newNode;             // set new node as head
}

void printList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insertAtBegin(1);
    insertAtBegin(2);
    insertAtBegin(3);
    insertAtBegin(4);
    insertAtBegin(5);
    cout << "Linked List: ";
    printList();
    return 0;
}
