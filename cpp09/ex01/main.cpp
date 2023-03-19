#include "RNP.hpp"
#include <iostream>

int main(int argc, char **argv)
{
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
            if (*p >= '0' && *p <= '9')
                rnp.push(*p - '0');
            else if (*p == ' ')
            {
            }
            else if (operators.find(*p) != std::string::npos)
                rnp.operate(*p);
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
