#include <iostream>
using namespace std;

string grade(int num)
{
    string grade;
    if (num > 75)
    {
        grade = " A ";
    }
    else if (num > 50)
    {
        grade = " B ";
    }
    else if (num > 25)
    {
        grade = " C ";
    }
    else
    {
        grade = " D ";
    }
    return grade;
}

int main()
{
    int n;
    cin >> n;
    int arr[n]; // made number of dabbas as user given as in arrays

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // taking input from user
    }
    for (int i = 0; i < n; i++)
    {
        cout << grade(arr[i]); // calling grade function for grading
    }
}