#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i <= str.length(); i++)
    {
        str[i] = str[i] + 32;
    }
    cout << str;
    return 0;
}