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

    exchange.checkPrices();

    return 0;
}
