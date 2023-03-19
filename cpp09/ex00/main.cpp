#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    BitcoinExchange exchange(argv[1]);

    // std::cout << "----------------" << std::endl;
    // exchange.checkPrice("2010-09-13", 0);
    // std::cout << "----------------" << std::endl;
    // exchange.checkPrice("2010-09-16", 0);
    // std::cout << "----------------" << std::endl;
    // exchange.checkPrice("2010-09-14", 0);
    // std::cout << "----------------" << std::endl;
    exchange.checkPrice("2009-01-01", 0);
    return 0;
}
