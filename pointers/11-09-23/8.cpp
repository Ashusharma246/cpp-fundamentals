#include <iostream>
int main()
{
    const int x = 10;
    const int *ptr = &x;
    std::cout << *ptr << std::endl;
}