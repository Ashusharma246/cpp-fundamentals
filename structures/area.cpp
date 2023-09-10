/*Define a structure called Rectangle to represent a rectangle. It should have two members:

Length (float)
Width (float)
Write a C++ program that calculates and displays the area of a rectangle using the given length and width. Prompt the user to enter the length and width of the rectangle as input.*/
#include <iostream>
using namespace std;

struct rectangle
{
    float lenght;
    float width;
};

int main()
{
    int num = 1;
    struct rectangle area;

    cout << "enter length: ";
    cin >> area.lenght;
    cout << "enter breadth: ";
    cin >> area.width;
    cout << "area of the rectangle is: " << area.lenght * area.width << endl;

    return 0;
}
