#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num, index;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "element ro be searched: ";
    cin >> num;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == num)
        {
            index = i + 1;
            break;
        }
    }
    cout << "the element found at: " << index;
    return 0;
}