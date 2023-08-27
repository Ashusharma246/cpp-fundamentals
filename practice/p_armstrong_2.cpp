#include <iostream>
using namespace std;
void armstrong(int num)
{
    int sum = 0;
    int x;
    int z = num;
    while (num != 0)
    {
        x = num % 10;
        sum = sum + x * x * x;
        num = num / 10;
    }
    if (sum == z)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not an armstrong";
    }
}
int main()
{
    int num;
    cout << "Number: ";
    cin >> num;
    armstrong(num);
    return 0;
}