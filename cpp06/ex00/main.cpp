#include <cstdlib>
#include <iostream>
#include <limits>

int print_inf(std::string str)
{
    std::string printable =
        str[0] == 'n' ? "nan" : std::string("inf").insert(0, 1, str[0]);
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << printable << "f" << std::endl;
    std::cout << "double: " << printable << std::endl;
    return (0);
}

int is_number(std::string str)
{
    std::size_t n;

    if (str[0] == '-')
        n = str.find_first_not_of("123456789", 1);
    else
        n = str.find_first_not_of("123456789");

    if (n == std::string::npos)
        return (1);
    else if (str[n] != '.' ||
             str.find_first_not_of("123456789", n + 1) != std::string::npos)
        return (0);
    return (1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);

    std::string str(argv[1]);
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" ||
        str == "+inf" || str == "nan")
        return (print_inf(str));
    if (!is_number(str))
    {
        std::cout << "That is not a number sry :(." << std::endl;
        return (1);
    }

    double res = atof(str.c_str());
    double resInt = static_cast<int>(res);

    std::cout << "char: " << (std::isprint(resInt) ? str : "Not displayable.")
              << std::endl;
    std::cout << "int: " << resInt << std::endl;
    std::cout << "float: " << static_cast<float>(res)
              << (res - atoi(str.c_str()) > 0 ? "f" : ".0f") << std::endl;
    std::cout << "double: " << res << (res - atoi(str.c_str()) > 0 ? "" : ".0")
              << std::endl;

    return (0);
}
