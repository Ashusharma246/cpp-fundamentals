#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    int a = 0;
    for (int i = 0; i <= count; i++)
    {
        if (str[i] == 97)
        {
            a++;
        }
    }
    cout << a;
}