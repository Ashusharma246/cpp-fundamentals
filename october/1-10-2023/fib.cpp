#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int fib;
    int a = 0, b = 1;
    if (num == 0)
        cout << a;
    else if (num == 1)
        cout << a << b;
    else
        cout << a << b;
    for (int i = 2; i <= num; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
        cout << fib;
    }
    return 0;
}