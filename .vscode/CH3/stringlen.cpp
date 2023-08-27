#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prompt("what is your name: "),
        name,
        line(40, '-'),
        total = "hello ";
    cout << prompt;
    getline(cin, name);
    total += name;

    cout << line << endl
         << total << endl;
    cout << "your name is "
         << name.length() << " characters long!" << endl;
    cout << line << endl;
    return 0;
}