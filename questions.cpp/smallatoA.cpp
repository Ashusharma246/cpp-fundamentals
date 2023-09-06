// 5. Write a program to replace all small 'a' with 'A' in given string
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str1 = str;
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    cout << count;
    for (int i = 0; i < count; i++)
    {
        if (str1[i] == 97)
        {
            str1[i] = 65;
        }
    }
    cout << str1;
}