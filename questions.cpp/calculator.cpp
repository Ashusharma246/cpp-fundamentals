#include <iostream>
using namespace std;
void calculator(int num1, int num2)
{
    string operation;
    cout << "operation that you want to perform: ";
    cin >> operation;
    if (operation == "+")
    {
        cout << num1 + num2;
    }
    else if (operation == "-")
    {
        cout << num1 - num2;
    }
    else if (operation == "*")
    {
        cout << num1 * num2;
    }
    else if (operation == "/")
    {
        cout << num1 / num2;
    }
    else
    {
        cout << "invalid opertion";
    }
}

int main()
{
    int num1, num2;
    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;
    calculator(num1, num2);

    return 0;
}