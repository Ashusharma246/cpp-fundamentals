#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;    // Pointer to an array for storing stack elements
    int top;     // Index of the top element in the stack
    int maxSize; // Maximum size of the stack

public:
    Stack(int size)
    {
        maxSize = size;
        arr = new int[maxSize]; // Dynamically allocate memory for the stack
        top = -1;               // Initialize top to -1 to indicate an empty stack
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot push." << endl;
        }
        else
        {
            arr[++top] = value; // Increment top and add the value to the stack
            cout << value << " pushed onto the stack." << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }
        else
        {
            cout << arr[top--] << " popped from the stack." << endl; // Remove and decrement top
        }
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Top element: " << arr[top] << endl; // Display the top element
        }
    }

    bool isEmpty()
    {
        return top == -1; // Check if the stack is empty
    }

    bool isFull()
    {
        return top == maxSize - 1; // Check if the stack is full
    }

    int size()
    {
        return top + 1; // Return the number of elements in the stack
    }
};

int main()
{
    int size;
    cout << "Enter the maximum size of the stack: ";
    cin >> size;

    Stack stack(size);

    int choice;
    while (true)
    {
        cout << "\nStack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if empty" << endl;
        cout << "5. Check if full" << endl;
        cout << "6. Get size" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value); // Call the push method to add a value to the stack
            break;
        case 2:
            stack.pop(); // Call the pop method to remove the top element from the stack
            break;
        case 3:
            stack.peek(); // Call the peek method to view the top element of the stack
            break;
        case 4:
            if (stack.isEmpty()) // Check if the stack is empty using the isEmpty method
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                cout << "Stack is not empty." << endl;
            }
            break;
        case 5:
            if (stack.isFull()) // Check if the stack is full using the isFull method
            {
                cout << "Stack is full." << endl;
            }
            else
            {
                cout << "Stack is not full." << endl;
            }
            break;
        case 6:
            cout << "Stack size: " << stack.size() << endl; // Get the stack size using the size method
            break;
        case 7:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
