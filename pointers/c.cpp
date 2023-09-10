#include <iostream>
using namespace std;

int main()
{
    // normal array dec
    int arr[10] = {1};

    cout << arr[9] << endl;
    cout << arr[10] << endl;

    *(arr + 10) = 100;

    cout << arr[9] << endl;
    cout << arr[10] << endl;

    return 0;
}