#include <iostream>
int main()
{
    int x = 5;
    int *ptr = nullptr;
    ptr = &x;
    std::cout << *ptr << std::endl;
}