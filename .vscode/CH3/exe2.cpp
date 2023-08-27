#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message("I have learned something new again!\n"),
        prompt("pleases input two lines of text: ");
    string str1, str2, sum;
    int len = message.length();

    cout << message << endl;
    cout << len << endl;

    getline(cin, str1);
    getline(cin, str2);

    sum = str1 + " * " + str2;
    cout << sum << endl;

    return 0;
}