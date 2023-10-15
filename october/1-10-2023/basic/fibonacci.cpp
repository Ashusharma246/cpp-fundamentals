#include <iostream>
using namespace std;
void fibonacci(int num)
{
    int a = 0, b = 1;
    int fib;
    cout << a << b;
    for (int i = 2; i < num; i++)
    {

        fib = a + b;
        a = b;
        b = fib;
        cout << fib;
    }
}
int main()
{
    int num;
    cin >> num;
    fibonacci(num);
    return 0;
}