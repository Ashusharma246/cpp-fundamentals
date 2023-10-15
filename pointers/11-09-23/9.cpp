#include <iostream>
int main()
{
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    std::cout << **ptr2 << std::endl;
}