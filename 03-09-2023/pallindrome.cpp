#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (str[i] != str[count - i - 1])
        {
            cout << "not an pallindrome";
            return 0;
        }
    }

    cout << "pallindrome";

    return 0;
}