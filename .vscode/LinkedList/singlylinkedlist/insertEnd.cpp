#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);   // Create a new node with the given integer value 'x'
    if (head == NULL)           // Check if the linked list is empty (head is NULL)
        return temp;            // If empty, return the new node as the new head
    Node *curr = head;          // If the list is not empty, start traversing from the head
    while (curr->next != NULL)  // Traverse the list to find the last node
    {
        curr = curr->next;
    }
    curr->next = temp;           // Attach the new node to the last node's 'next' pointer
    return head;                 // Return the original head of the linked list
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printlist(head);
    return 0;
}
