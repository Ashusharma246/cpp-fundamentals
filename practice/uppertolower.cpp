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

    for (int i = 0; i < count; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    cout << str;
}