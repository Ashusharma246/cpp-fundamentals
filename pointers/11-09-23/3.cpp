#include <iostream>
int main()
{
    int a = 10, b = 20;
    int *ptr1 = &a, *ptr2 = &b;
    *ptr1 = *ptr1 + *ptr2;
    std::cout << a << std::endl;
}