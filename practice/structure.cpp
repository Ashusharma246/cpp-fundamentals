#include <iostream>
using namespace std;

struct student
{
    string name;
    int stuId;
    int regNo;
    int year;
};
void printstudinfo(student obj)
{
    cout << obj.name << " " << obj.stuId << " " << obj.regNo << "" << obj.year << endl;
}
int main()
{
    struct student ashu;
    ashu.name = "ashu";
    ashu.stuId = 1;
    ashu.regNo = 41110138;
    ashu.year = 3;

    printstudinfo(ashu);

    return 0;
}