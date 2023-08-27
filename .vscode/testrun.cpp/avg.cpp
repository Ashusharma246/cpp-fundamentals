// 2. Write a program that takes an array of integers as input and calculates and prints the average of all the numbers in the array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float avg = (sum) / n;
    cout << "the avergae is: " << avg << endl;
    return 0;
}