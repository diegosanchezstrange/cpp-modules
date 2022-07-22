#include <iostream>
#include <fstream>

std::string ft_get_replaced_string(std::string str, std::string s1, std::string s2)
{
    std::string sol;
    int         start;
    unsigned long         next;

    start = 0;
    while ((next = str.find(s1, start)) != std::string::npos)
    {
        sol += str.substr(start, next - start);
        sol += s2;
        start += next - start + s1.length();
    }
    sol += str.substr(start, str.length() - start);
    return (sol);
}

int main(int argc, char **argv)
{
    std::ifstream    fileIn;
    std::ofstream    fileOu;
    std::string     line;
    std::string     name;

    if (argc != 4)
        return (1);
    if (std::string(argv[2]).empty() || std::string(argv[3]).empty())
        return (1);
    name = argv[1];
    name += ".replace";
    fileIn.open(argv[1]);
    fileOu.open(name.c_str());
    if (!fileIn.is_open() || !fileOu.is_open())
        return (2);
    while (std::getline(fileIn, line).good())
    {
        if (line.find(argv[2], 0) != std::string::npos)
            line = ft_get_replaced_string(line, argv[2], argv[3]);
        fileOu << line << std::endl;
    }
    fileIn.close();
    fileOu.close();
    return (0);
}

