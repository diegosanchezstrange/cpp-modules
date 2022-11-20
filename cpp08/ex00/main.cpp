#include "easyfind.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v;
    std::vector<int>::iterator it;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    it = easyfind(v, 2);
    if (it == v.end())
        std::cout << "Number not found" << std::endl;
    else
        std::cout << *it << std::endl;

    it = easyfind(v, 7);
    if (it == v.end())
        std::cout << "Number not found" << std::endl;
    else
        std::cout << *it << std::endl;
    return 0;
}
