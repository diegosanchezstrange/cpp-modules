#include "Array.hpp"
#include <exception>
#include <iostream>

#define MAX_VAL 750

int main()
{
    {
        Array<int> emptyArr;
        Array<int> arr(4);

        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        for (size_t i = 0; i < arr.size(); i++)
            std::cout << "I: " << i << " VAL: " << arr[i] << std::endl;
        try
        {
            arr[5] = 12;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        Array<int> arr2(arr);
        std::cout << "arr[0] = " << arr[0] << std::endl;
        arr[0] = 42;
        std::cout << "-------ARR-------" << std::endl;
        for (size_t j = 0; j < arr.size(); j++)
            std::cout << "J: " << j << " VAL: " << arr[j] << std::endl;
        std::cout << "-------ARR2-------" << std::endl;
        for (size_t j = 0; j < arr2.size(); j++)
            std::cout << "J: " << j << " VAL: " << arr2[j] << std::endl;
        std::cout << "------------------" << std::endl;
    }
    {
        Array<std::string> emptyArr;
        Array<std::string> arr(4);

        arr[0] = "uno";
        arr[1] = "dos";
        arr[2] = "tres";
        arr[3] = "cuatro";
        for (size_t i = 0; i < arr.size(); i++)
            std::cout << "I: " << i << " VAL: " << arr[i] << std::endl;
        try
        {
            arr[5] = "cinco";
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
    }

    return 0;
}
