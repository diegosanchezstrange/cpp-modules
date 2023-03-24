
#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

void printVec(std::vector<int> &v)
{
    for (size_t i = 0; i < 5; i++)
        std::cout << v[i] << " ";
    if (v.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    PmergeMe pmm;
    std::vector<int> v;
    std::list<int> l;
    char *p;

    if (argc <= 2)
    {
        std::cout << "Usage: " << argv[0] << " <number> <number> ..."
                  << std::endl;
        return 1;
    }

    {
        for (int i = 1; i < argc; i++)
        {
            // check if the argument is a number
            // if it is, add it to the vector
            // if not, throw an error
            // if the number is negative, throw an error
            strtol(argv[i], &p, 10);
            if (atoi(argv[i]) > 0 && *p == '\0')
                v.push_back(atoi(argv[i]));
            else
            {
                std::cout << "Invalid argument: " << argv[i] << std::endl;
                return 1;
            }
        }

        int threshold = v.size() < 15 ? v.size() : 15;

        std::cout << "Before: \t";
        printVec(v);

        clock_t begin = clock();

        pmm.mergeMeVector(v, 0, v.size() - 1, threshold);

        clock_t end = clock();
        double elapsed = double(end - begin) / CLOCKS_PER_SEC;

        std::cout << "After: \t\t";
        printVec(v);

        std::cout << "Time to process a range of " << v.size()
                  << " elements with std::vector: " << std::fixed
                  << std::setprecision(6) << elapsed << " seconds" << std::endl;
    }
    {
        for (int i = 1; i < argc; i++)
        {
            // check if the argument is a number
            // if it is, add it to the vector
            // if not, throw an error
            // if the number is negative, throw an error
            strtol(argv[i], &p, 10);
            if (atoi(argv[i]) > 0 && *p == '\0')
                l.push_back(atoi(argv[i]));
            else
            {
                std::cout << "Invalid argument: " << argv[i] << std::endl;
                return 1;
            }
        }
        int threshold = v.size() < 15 ? v.size() : 15;

        clock_t begin = clock();
        pmm.mergeMeList(l, 0, l.size() - 1, threshold);
        clock_t end = clock();
        double elapsed = double(end - begin) / CLOCKS_PER_SEC;

        std::cout << "Time to process a range of " << l.size()
                  << " elements with std::list: " << std::fixed
                  << std::setprecision(6) << elapsed << " seconds" << std::endl;
    }
    return 0;
}
