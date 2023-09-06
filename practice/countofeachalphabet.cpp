#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    }
    int arr[26] = {0};
    for (int i = 0; i < count; i++)
    {
        int index = str[i] - 'a';
        arr[index]++;
        }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            char c = i + 'a';
            cout << c << "=====>" << arr[i] << endl;
        }
    }
    return 0;
}