#include <iostream>
using namespace std;

void Sequence(long long int n)
{
    long long int num = 1;
    for (int i = 0; i < n; i++)
    {
        cout << num << " ";
        num *= 2;
    }
}
int main()
{
    long long int n;
    cout << "Enter the value of n: ";
    cin >> n;
    Sequence(n);
    return 0;
}