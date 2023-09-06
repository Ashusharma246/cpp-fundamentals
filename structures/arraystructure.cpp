#include <iostream>
using namespace std;

// student structure
struct Student //-----> User defined Datatype
{
    string name;
    int stuId;
    int year;
};

void printStudent(struct Student obj)
{
    cout << "Student : " << obj.name << " " << obj.stuId << " " << obj.year << endl;
}

int main()
{
    struct Student students[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> students[i].name;
        cin >> students[i].stuId;
        cin >> students[i].year;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << students[i].name;
        cout << students[i].stuId;
        cout << students[i].year
             << endl;
    }

    return 0;
}