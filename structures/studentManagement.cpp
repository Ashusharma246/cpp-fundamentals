/*Student Management System
Design a C++ program to create a student management system using structures. The program should allow the user to:

Add a new student with their name, roll number, and marks in three subjects. :- Completed.
Display the details of all students. :-completed.
Find and display the student with the highest marks.:=completed.
Calculate and display the average marks of all students.:completed. */
#include <iostream>
using namespace std;
struct studentmangement
{
    string name;
    int rollno;

    string subject1;
    string subject2;
    string subject3;
    int marksofsubject1;
    int marksofsubject2;
    int marksofsubject3;
    int totalmarks;
};
int main()
{
    int num;
    cout << "enter number of students: ";
    cin >> num;

    struct studentmangement student[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter the name of students: " << endl;
        cin >> student[i].name;
        cout << "enter the roll number: " << endl;
        cin >> student[i].rollno;
        cout << "enter the name of subject 1:  " << endl;
        cin >> student[i].subject1;
        cout << "enter marks: ";
        cin >> student[i].marksofsubject1;
        cout << "enter the name of subject 2:  " << endl;
        cin >> student[i].subject2;
        cout << "enter marks: ";
        cin >> student[i].marksofsubject2;
        cout << "enter the name of subject 3:  " << endl;
        cin >> student[i].subject3;
        cout << "enter marks: ";
        cin >> student[i].marksofsubject3;
        student[i].totalmarks = student[i].marksofsubject1 + student[i].marksofsubject2 + student[i].marksofsubject3;
        cout << "\n";
        cout << "total marks is :" << student[i].totalmarks;
        cout << "\n";
    }
    cout << "student details: ";
    for (int i = 0; i < num; i++)
    {

        cout << "student name: " << student[i].name << endl;
        cout << "student roll no: " << student[i].rollno << endl;
        cout << "student subject1 : " << student[i].subject1 << " "
             << "marks: " << student[i].marksofsubject1 << endl;
        cout << "student subject2 : " << student[i].subject2 << " "
             << "marks: " << student[i].marksofsubject2 << endl;
        cout << "student subject3 : " << student[i].subject3 << " "
             << "marks: " << student[i].marksofsubject3 << endl;
        cout << "student  is : " << student[i].name << "\n"
             << "total marks of student is: " << student[i].totalmarks << endl;
    }
    float max = student[0].totalmarks; // creating array for storing from index 0
    int maxindex = 0;                  // creating a box for indexing
    for (int i = 0; i < num; i++)
    {
        if (student[i].totalmarks >= max)
        {
            max = student[i].totalmarks; // updating max value
            maxindex = i;                // assigning index to maxindex
        }
    }
    cout << "student with highest marks: " << max << endl;
    cout << "stdeunt name is " << student[maxindex].name << endl;
    cout << "student roll no is " << student[maxindex].rollno << endl;
    float sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += student[i].totalmarks;
    }
    float average = (sum) / num;
    cout << "average is: " << average << endl;
    return 0;
}