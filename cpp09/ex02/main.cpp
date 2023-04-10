
#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

void printVec(std::vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    // if (v.size() > 5)
    //     std::cout << "[...]";
    std::cout << std::endl;
}

void printList(std::list<int> &l)
{
    for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    PmergeMe         pmm;
    std::vector<int> v;
    std::list<int>   l;
    char            *p;

    if (argc <= 2)
    {
        std::cout << "Usage: " << argv[0] << " <number> <number> ..."
                  << std::endl;
        return 1;
    }

    {
        clock_t begin = clock();
        for (int i = 1; i < argc; i++)
        {
            // check if the argument is a number
            // if it is, add it to the vector
            // if not, throw an error
            // if the number is negative, throw an error
            strtol(argv[i], &p, 10);
            if (atoi(argv[i]) > 0 && *p == '\0')
                v.push_back(atoi(argv[i]));
            else if (strcmp(argv[i], "0") == 0)
                v.push_back(0);
            else
            {
                std::cout << "Invalid argument: " << argv[i] << std::endl;
                return 1;
            }
        }

        int threshold = v.size() < 15 ? v.size() : 15;

        std::cout << "Before: \t";
        printVec(v);

        pmm.mergeMeVector(v, 0, v.size() - 1, threshold);

        clock_t end     = clock();
        double  elapsed = double(end - begin) / CLOCKS_PER_SEC;

        std::cout << "After: \t\t";
        printVec(v);

        std::cout << "Time to process a range of " << v.size()
                  << " elements with std::vector: " << std::fixed
                  << std::setprecision(6) << elapsed << " seconds" << std::endl;
    }
    {
        clock_t begin = clock();
        for (int i = 1; i < argc; i++)
        {
            // check if the argument is a number
            // if it is, add it to the vector
            // if not, throw an error
            // if the number is negative, throw an error
            strtol(argv[i], &p, 10);
            if (atoi(argv[i]) > 0 && *p == '\0')
                l.push_back(atoi(argv[i]));
            else if (strcmp(argv[i], "0") == 0)
                v.push_back(0);
            else
            {
                std::cout << "Invalid argument: " << argv[i] << std::endl;
                return 1;
            }
        }
        int threshold = v.size() < 15 ? v.size() : 15;

        pmm.mergeMeList(l, 0, l.size() - 1, threshold);
        clock_t end     = clock();
        double  elapsed = double(end - begin) / CLOCKS_PER_SEC;

        // std::cout << "List: \t";
        // printList(l);

        std::cout << "Time to process a range of " << l.size()
                  << " elements with std::list: " << std::fixed
                  << std::setprecision(6) << elapsed << " seconds" << std::endl;
    }
    return 0;
}
