#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        return mid;

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 6, 6);
    cout << "index of 6 is" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 6, 14);
    cout << "index of odd 5 is" << oddIndex << endl;
}
int findPeak(int arr[].int n){
    int s = 0, e = n - 1;
    int mid=
}