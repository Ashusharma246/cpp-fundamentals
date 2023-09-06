/*Create a structure called Employee to store the following information about an employee:

Employee ID (integer)
Employee name (string)
Salary (float)
Write a C++ program that allows the user to input details for three employees and then displays the details of the employee with the highest salary.*/
#include <iostream>
using namespace std;
struct Employee
{
    int Employee_id;
    string Employee_name;
    float Salary;
};

int main()
{
    int num = 0;
    cout << "enter the number of Employees : ";
    cin >> num;
    struct Employee employee[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter employee Id : " << endl;
        cin >> employee[i].Employee_id;
        cout << "enter employee name: " << endl;
        cin >> employee[i].Employee_name;
        cout << "enter employee salary : " << endl;
        cin >> employee[i].Salary;
    }
    float max = employee[0].Salary;
    int maxindex = 0;
    for (int i = 1; i < num; i++)
    {
        if (employee[i].Salary >= max)
        {
            max = employee[i].Salary;
            maxindex = i;
        }
    }

    cout << "Employee with the highest salary:" << endl;
    cout << "Employee ID: " << employee[maxindex].Employee_id << endl;
    cout << "Employee Name: " << employee[maxindex].Employee_name << endl;
    cout << "Salary: " << employee[maxindex].Salary << endl;

    return 0;
}
