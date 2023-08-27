#include <iostream>
using namespace std;
int area_of_square(int side)
{
    int area = side * side;

    return area;
}
int area_of_rectangle(int lenght, int breadth)
{
    int area = lenght * breadth;
    return area;
}
float area_of_triangle(int height, int base)
{
    float area = 0.5 * height * base;
    return area;
}

int main()
{
    int choice;

    while (1)
    {
        bool flag = false;
        cout << "**********Area**********" << endl;
        cout << "1.Area of square\n ";
        cout << "2.Area of rectangle\n";
        cout << "3.Area of triangle\n";
        cout << "4.exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int square;
            cout << "enter side: \n";
            cin >> square;
            int square_side = area_of_square(square);
            cout << square_side << endl;
            break;
        }

        case 2:
        {
            int length, breadth, area;
            cout << "enter lenght: \n";
            cin >> length;
            cout << "enter breath: \n";
            cin >> breadth;
            area = area_of_rectangle(length, breadth);
            cout << area;
            break;
        }
        case 3:
        {
            int height, base;
            float area;
            cout << "enter height: \n";
            cin >> height;
            cout << "enter base: \n";
            cin >> base;
            area = area_of_triangle(height, base);
            cout << area << endl;
        }
        default:
        {
            flag = true;
            cout << "menu ended!!" << endl
                 << endl;
            break;
        }
        }
        if (flag == true)
        {
            break;
        }
    }
    return 0;
}
