#include <iostream>
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers + 2;
    std::cout << *ptr << std::endl;
}