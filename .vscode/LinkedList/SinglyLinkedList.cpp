#include <iostream>
using namespace std;

// Singly Linked List
struct Node
{
    int data;
    struct Node *next = NULL;

    // constructor
    Node(int val, struct Node *n)
    {
        data = val;
        next = n;
    }
};

void insert(Node *head, int val)
{
    Node *newNode = new Node(val, NULL);

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}

void printLinkedList(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->data << "---->";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(5, NULL);

    // insert in head list
    insert(head, 10);
    insert(head, 15);
    insert(head, 20);
    insert(head, 25);
    insert(head, 30);

    // function to print linked list
    printLinkedList(head);

    return 0;
}