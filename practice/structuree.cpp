#include <iostream>
using namespace std;

struct student
{
    string name;
    int stuid;
    int year;
};

void printoutput(student obj)
{
    cout << obj.name << " \n"
         << obj.stuid << " \n"
         << obj.year;
}
int main()
{
    struct student ashu;
    ashu.name = "ashu";
    ashu.stuid = 1;
    ashu.year = 3;

    printoutput(ashu);
    return 0;
}