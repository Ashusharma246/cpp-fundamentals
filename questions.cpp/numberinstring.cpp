// 1. Write a program to count number of a in a string
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
    int number = 0;
    for (int i = 0; i < count; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            number++;
        }
    }
    cout << number;
    return 0;
}
