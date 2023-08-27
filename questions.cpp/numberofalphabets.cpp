// 2. Given a string for example abc and a number let's say 3 you have to return a output aaabbbccc
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int n;
    cout << "enter the number of times you want to print: " << endl;
    cin >> n;
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << str[i];
        }

        return 0;
    }
}