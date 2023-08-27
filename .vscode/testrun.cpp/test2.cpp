#include <iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << num1 / num2;
        }
        else
        {
            cout << "Cannot divide by zero.";
        }
        break;
    default:
        cout << "Invalid operator.";
    }

    return 0;
}