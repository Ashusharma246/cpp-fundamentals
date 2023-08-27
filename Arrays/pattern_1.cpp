// if n==3 ans is 223332111
// if n==2 ans is 2211
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}