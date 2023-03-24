#include "RNP.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    bool space = false;
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " <expression>" << std::endl;
        return 1;
    }
    RNP rnp;

    while (*++argv)
    {
        char *p = *argv;
        std::string operators = "+-*/";
        while (*p)
        {
            if (*p >= '0' && *p <= '9' && !space)
            {
                rnp.push(*p - '0');
                space = !space;
            }
            else if (*p == ' ' && space)
                space = !space;
            else if (*p == ' ' && !space)
            {
                std::cout << "Invalid space" << std::endl;
                return 1;
            }
            else if (operators.find(*p) != std::string::npos && !space)
            {
                rnp.operate(*p);
                space = !space;
            }
            else
            {
                std::cout << "Invalid character: " << *p << std::endl;
                return 1;
            }
            ++p;
        }
    }
    rnp.print();
    return 0;
}
