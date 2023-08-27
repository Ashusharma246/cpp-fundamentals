#include <iostream>
using namespace std;
int main()
{
    string str = "Ashu sharma";
    string str1 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                str1 += str[i] + 32;
            }
        }
        else if (str[i] != 32)
        {
            str1 += str[i];
        }

        else
        {
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
    }
    cout << str1;
    return 0;
}