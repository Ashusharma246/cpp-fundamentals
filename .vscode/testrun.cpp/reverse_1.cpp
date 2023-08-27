#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();

    for (int i = 0; i < str.size() / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    cout << str;
}