#include <iostream>
using namespace std;

int main()
{
    // normal int variable
    int a = 20;

    int b = 40;

    // pointer variable which is pointing to a
    int *ptr_a = &a;

    cout << "a : " << a << endl;
    cout << "ptr_a : " << ptr_a << endl;
    cout << "*ptr_a : " << *ptr_a << endl;

    ptr_a = &b;

    cout << "b : " << b << endl;
    cout << "ptr_a : " << ptr_a << endl;
    cout << "*ptr_a : " << *ptr_a << endl;

    // Pointers with array
    int arr[10];

    for (int i = 1; i <= 10; i++)
    {
        arr[i - 1] = i;
    }

    cout << "*arr : " << *arr << endl;
    cout << "*arr1 : " << *(arr + 1) << endl;
    cout << "*arr2 : " << *(arr + 2) << endl;

    return 0;
}