#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;   // to store the value of the node
    Node *next; // and a poiter 'next' to the next node
    Node(int x)
    { // the constructor initialise these members
        data = x;
        next = NULL; // default value od=f next is NULL
    }
};
// insert end is used to insert new node withe the value x at the end of a singly linked list

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x); // temp is a NEW NODE with the given value X
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}