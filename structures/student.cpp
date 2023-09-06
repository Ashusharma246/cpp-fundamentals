/*Create a C++ program that defines a structure called Student to store the following information about a student:

Student name (string)
Roll number (integer)
Marks in mathematics (float)
Marks in science (float)
Marks in English (float)
Then, write a program to input the details of three students and display their information.*/
#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollnumber;
    float mathsMarks;
    float scienceMarks;
    float englishMarks;
};
int main()
{
    int num;
    cout << "enter number of students: " << endl;
    cin >> num;
    struct student information[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter student name: " << endl;
        cin >> information[i].name;
        cout << "enter roll number: " << endl;
        cin >> information[i].rollnumber;
        cout << "enter maths marks: " << endl;
        cin >> information[i].mathsMarks;
        cout << "enter scirnce marks: " << endl;
        cin >> information[i].scienceMarks;
        cout << "enter english marks: " << endl;
        cin >> information[i].englishMarks;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Student Name: " << information[i].name << endl;
        cout << "Roll Number: " << information[i].rollnumber << endl;
        cout << "Math Marks: " << information[i].mathsMarks << endl;
        cout << "Science Marks: " << information[i].scienceMarks << endl;
        cout << "English Marks: " << information[i].englishMarks << endl;
    }
    return 0;
}