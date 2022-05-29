//
// Created by diego on 29/05/22.
//

#include "Karen.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    if (std::string(argv[1]).empty())
        return (2);
    Karen().complain(argv[1]);
    return (0);
}
