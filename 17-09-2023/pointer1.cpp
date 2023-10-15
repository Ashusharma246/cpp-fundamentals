#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int *ptr2 = arr + 3;

    std::cout << *ptr2 - *ptr1 << std::endl;

    return 0;
}
