// create a program to calculate the squareroot
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x1 = 4.0, x2 = 12.25, x3 = 0.0121;
    cout << "\n  " << x1 << "\t " << sqrt(x1)
         << "\n " << x2 << "\t " << sqrt(x2)
         << "\n"
         << x3 << "\t" << sqrt(x3) << endl;

    return 0;
}