#include <iostream>
int main()
{
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr + 2;
    std::cout << ptr[1] << std::endl;
}