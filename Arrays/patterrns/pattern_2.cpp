#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= i; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}