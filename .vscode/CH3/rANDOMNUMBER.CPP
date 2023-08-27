#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int seed;
    int z1, z2, z3;

    cout << "--random number--\n"
         << "to initialize the random number generator\n"
         << "please enter the number : ";
    cin >> seed;
    srand(seed);
    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "the random number are " << z1 << " " << z2 << " " << z3 << endl;

    return 0;
}