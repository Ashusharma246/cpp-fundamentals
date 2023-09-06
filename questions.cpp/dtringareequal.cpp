// 6. Write a program to check if two strings are equal without using == operator.
#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int i = 0, z = 0, count1 = 0, count2 = 0;
    bool are_equal = true;
    while (int str1[i] != '\0')
    {
        i++;
        count1++;
    }
    while (str2[z] != '\0')
    {
        z++;
        count2++;
    }
    while (str1[i] != '\0' || str2[z] != '\0')
    {
        if (str1[i] != str2[z])
        {
            are_equal = false;
            break;
        }
        i++;
        z++;
    }
    if (are_equal)
    {
        cout << "equal";
    }
    else
    {
        cout << "not equal";
    }
    return 0;
}