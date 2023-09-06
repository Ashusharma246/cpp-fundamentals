#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n;
    int count = 0;
    while (i != 0)
    {
        i = i / 10;
        count++;
    }
    cout << count;
    return 0;
}