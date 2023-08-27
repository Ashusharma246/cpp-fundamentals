// 4. Write a program to find factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact;
}