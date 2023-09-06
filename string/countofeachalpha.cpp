#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int arr[26] = {0};
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    for (int i = 0; i < count; i++)
    {
        int idx = str[i] - 'a';
        arr[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            char c = i + 'a';
            cout << c << "---->" << arr[i] << endl;
        }
    }

    return 0;
}