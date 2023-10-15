#include <iostream>
int main()
{
    int num = 42;
    int *ptr1 = &num;
    int *ptr2 = ptr1;
    *ptr2 = 55;
    std::cout << *ptr1 << std::endl;
}