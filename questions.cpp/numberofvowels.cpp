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
    int vowelscount = 0;
    int vowels[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == vowels[j])
            {
                vowelscount++;
            }
        }
    }
    cout << vowelscount << endl;
    return 0;
}