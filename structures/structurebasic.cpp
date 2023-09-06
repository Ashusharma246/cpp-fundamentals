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
    // creating a Student variable
    struct Student hritik;
    hritik.name = "Hritik Sharma";
    hritik.stuId = 1;
    hritik.year = 4;

    struct Student himansi;
    himansi.name = "Himnansi Sharma";
    himansi.stuId = 1;
    himansi.year = 4;

    struct Student ashu;
    ashu.name = "Ashu";
    ashu.stuId = 3;
    ashu.year = 3;

    // printing a Student variable
    printStudent(hritik);
    printStudent(himansi);
    printStudent(ashu);

    return 0;
}