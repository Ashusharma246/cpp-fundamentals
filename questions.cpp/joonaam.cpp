// reverse a number
#include <iostream>
using namespace std;
int main()
{
    string str;

    cin >> str;

    // lowercase to uppercase
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }

    cout << str;

    return 0;
}