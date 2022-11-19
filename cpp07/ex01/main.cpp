#include "iter.hpp"
#include <iostream>

void testFunction(int &i) { i = 42; }

int main()
{
    int arr[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << std::endl;
    ::iter(arr, 4, &testFunction);
    for (int j = 0; j < 4; j++)
        std::cout << arr[j] << std::endl;
    return 0;
}
