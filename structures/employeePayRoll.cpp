/*Employee Payroll System
Design a C++ program to manage an employee payroll system using structures. Each employee should have the following attributes:

Employee ID (integer)
Employee name (string)
Hourly wage (float)
Hours worked (float)
The program should allow the user to:

Add new employees to the payroll.completed
Display the details of all employees.completed
Calculate and display the total payroll (wages) for all employees.
Find and display the employee with the highest earnings (hourly wage * hours worked).*/
#include <iostream>
using namespace std;

struct employee
{
    int employee_id;
    string employee_name;
    float hourly_wage;
    float hourly_worked;
};

int main()
{
    int num;
    cout << "enter the number of employee: ";
    cin >> num;

    employee employeepayroll[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter employee id: " << endl;
        cin >> employeepayroll[i].employee_id;
        cout << "enter employee name: " << endl;
        cin << employeepayroll[i].employee_name;
        cout << "enter hourly wage of the employee: " << endl;
        cin >> employeepayroll[i].hourly_wage;
        cout << "enter hourly worked" << endl;
        cin >> employeepayroll[i].hourly_worked;
    }
    cout << "book details: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << " employee id: " << employeepayroll[i].employee_id << endl;
        cout << " employee name: " << employeepayroll[i].employee_name << endl;
        cout << " employee hourly wage: " << employeepayroll[i].hourly_wage << endl;
        cout << " employee hourly worked: " << employeepayroll[i].hourly_worked << endl;
    }

    string newemployee;
    cout << "do you want to add new employee:(y/n) ";
    cin >> newemployee;
    int num2;
    if (newemployee == "y" || newemployee == "Y")
    {
        cout << "how many empolyee you want to add: " << endl;
        cin >> num2;
        employee newemployeepayroll[num2];
        for (int i = 0; i < num2; i++)
        {
            cout << "enter employee id: " << endl;
            cin >> newemployeepayroll[i].employee_id;
            cout << "enter employee name: " << endl;
            cin << newemployeepayroll[i].employee_name;
            cout << "enter hourly wage of the employee: " << endl;
            cin >> newemployeepayroll[i].hourly_wage;
            cout << "enter hourly worked" << endl;
            cin >> newemployeepayroll[i].hourly_worked;
        }
        cout << "employee details: " << endl;
        for (int i = 0; i < num; i++)
        {
            cout << " employee id: " << newemployeepayroll[i].employee_id << endl;
            cout << " employee name: " << newemployeepayroll[i].employee_name << endl;
            cout << " employee hourly wage: " << newemployeepayroll[i].hourly_wage << endl;
            cout << " employee hourly worked: " << newemployeepayroll[i].hourly_worked << endl;
        }
        num += num2;
    }
}