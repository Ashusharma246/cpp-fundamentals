#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str >= 'a' && str <= 'z')
    {
        cout << 0;
    }
    else if (str >= 'A' && str <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
