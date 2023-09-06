#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a = 0, b = 1;
    int fibonacci;
    cout << a << b;
    for (int i = 2; i < num; i++)
    {

        fibonacci = a + b;
        a = b;
        b = fibonacci;
        cout << fibonacci;
    }
    return 0;
}