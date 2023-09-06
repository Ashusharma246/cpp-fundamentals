#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    cout << a << b;
    int fibonacci;
    for (int i = 2; i < n; i++)
    {
        fibonacci = a + b;
        a = b;
        b = fibonacci;

        cout << fibonacci;
    }
    return 0;
}