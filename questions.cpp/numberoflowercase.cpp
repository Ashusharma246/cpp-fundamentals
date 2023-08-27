#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            count++;
        }
    }
    cout << count;
}
