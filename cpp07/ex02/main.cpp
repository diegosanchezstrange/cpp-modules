#include "Array.hpp"
#include <exception>
#include <iostream>

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
        Array<int> arr2(arr);
        try
        {
            arr[5] = 12;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        for (size_t j = 0; j < arr.size(); j++)
            std::cout << "J: " << j << " VAL: " << arr2[j] << std::endl;
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

    return 0;
}
