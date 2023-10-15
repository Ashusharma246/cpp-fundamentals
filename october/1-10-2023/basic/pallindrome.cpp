#include <iostream>
using namespace std;
void pallindrome(string str)
{
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
            cout << "not a pallindrome ";
            return;
        }
    }
    cout << "pallindorme";
}

int main()
{
    string str = "";
    cin >> str;
    pallindrome(str);
    return 0;
}