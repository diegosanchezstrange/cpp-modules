#include "whatever.hpp"
#include <iostream>
#include <ostream>

int main()
{
    {
        int int1 = 42;
        int int2 = 15;

        std::cout << "----- TEST SWAP ----- " << std::endl;
        std::cout << "int1: " << int1 << std::endl;
        std::cout << "int2: " << int2 << std::endl;
        ::swap(int1, int2);
        std::cout << "int1: " << int1 << std::endl;
        std::cout << "int2: " << int2 << std::endl;
        std::cout << "----- TEST MIN ----- " << std::endl;
        std::cout << "int1: " << int1 << std::endl;
        std::cout << "int2: " << int2 << std::endl;
        int min = ::min(int1, int2);
        std::cout << "min: " << min << std::endl;
        std::cout << "----- TEST MAX ----- " << std::endl;
        std::cout << "int1: " << int1 << std::endl;
        std::cout << "int2: " << int2 << std::endl;
        int max = ::max(int1, int2);
        std::cout << "max: " << max << std::endl;
    }

    {
        char c1 = '*';
        char c2 = 'a';

        std::cout << "----- TEST SWAP ----- " << std::endl;
        std::cout << "c1: " << c1 << std::endl;
        std::cout << "c2: " << c2 << std::endl;
        ::swap(c1, c2);
        std::cout << "c1: " << c1 << std::endl;
        std::cout << "c2: " << c2 << std::endl;
        std::cout << "----- TEST MIN ----- " << std::endl;
        std::cout << "c1: " << c1 << std::endl;
        std::cout << "c2: " << c2 << std::endl;
        char min = ::min(c1, c2);
        std::cout << "min: " << min << std::endl;
        std::cout << "----- TEST MAX ----- " << std::endl;
        std::cout << "c1: " << c1 << std::endl;
        std::cout << "c2: " << c2 << std::endl;
        char max = ::max(c1, c2);
        std::cout << "max: " << max << std::endl;
    }

    return 0;
}
