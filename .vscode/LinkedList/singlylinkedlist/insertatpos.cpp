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

Node *insertAtPos(Node *head, int x, int pos)
{

    Node *temp = new Node(x);                  // Create a new node with the given integer value 'x'
    if (head == NULL)                          // Check if the linked list is empty
    {       

        if (pos == 1)                        // If the list is empty, and 'pos' is 1, return the new node as the new head
            return temp;
        else
            return head;                     // If 'pos' is not 1, return the empty list as is
    }
    if (pos == 1)                           
    {
        temp->next = head;                     // If 'pos' is 1, insert the new node as the new head
        return temp;
    }
    for (int i = 1; i < pos - 1; i++)       // If 'pos' is not 1, traverse the list to find the position
        Node *curr = head;
    {
        curr = curr->next;
        if (curr == NULL)                    // If 'curr' becomes NULL before reaching 'pos-1', the position is out of range
        {
        cout << "Position out of range" << endl;
         return head;                    // Return the list unchanged
        }
    }
    temp->next = curr->next;                // Insert the new node at the specified position
    curr->next = temp;
    return head;                             // Return the head of the modified linked list
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printlist(head);
    head = insertAtPos(head, 25, 2);
    printlist(head);
    return 0;
}
