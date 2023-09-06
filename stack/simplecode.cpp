#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int maxSize;

public:
    Stack(int size)
    {
        maxSize = size;
        arr = new int[maxSize];
        top = -1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot push." << endl;
        }
        else
        {
            arr[++top] = value;
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
            cout << arr[top--] << " popped from the stack." << endl;
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
            cout << "Top element: " << arr[top] << endl;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == maxSize - 1;
    }

    int size()
    {
        return top + 1;
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
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            if (stack.isEmpty())
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                cout << "Stack is not empty." << endl;
            }
            break;
        case 5:
            if (stack.isFull())
            {
                cout << "Stack is full." << endl;
            }
            else
            {
                cout << "Stack is not full." << endl;
            }
            break;
        case 6:
            cout << "Stack size: " << stack.size() << endl;
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
