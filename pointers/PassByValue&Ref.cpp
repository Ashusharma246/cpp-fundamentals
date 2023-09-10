#include <iostream>
using namespace std;

void func(int a, int b, int c)
{
    a++;
    b++;
    c++;
}

void func2(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}

int main()
{
    int a = 1, b = 1, c = 1;

    cout << "Before func() call -----> \n";
    cout << a << " " << b << " " << c << endl;

    // pass by value
    func(a, b, c);
    cout << "After func() call -----> \n";
    cout << a << " " << b << " " << c << endl;

    // pass by ref
    func2(&b, &b, &b);
    cout << "After func2() call -----> \n";
    cout << a << " " << b << " " << c << endl;

    return 0;
}