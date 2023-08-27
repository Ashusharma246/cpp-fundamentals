// 1. You are given an array of integers. Write a program that finds and prints the maximum difference between any two elements in the array.
#include <iostream>
using namespace std;
int main()
{
    int n[5] = {10, 20, 30, 40, 50};

    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
    }
    cout << "maximum number is: " << max << endl;
    int min = 99999;
    for (int i = 0; i < 5; i++)
    {
        if (n[i] < min)
        {
            min = n[i];
        }
    }
    cout << "minimum number is: " << min << endl;
    int difference = max - min;

    cout << "the difference between the max and min number is: " << difference << endl;
}
