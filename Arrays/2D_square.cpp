#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << " row: ";
    cin >> n;

    cout << "col: ";
    cin >> num;

    int arr[n][num];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> arr[i][j];
        }
    }

    int square = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num; j++)
        {
            square = square + (arr[i][j] * arr[i][j]);
        }
    }

    cout << "Sum of squares of all elements: " << square << endl;

    return 0;
}