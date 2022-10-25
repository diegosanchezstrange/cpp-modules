#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test("pepe", 42);

    std::cout << test << std::endl;

    try 
    {
        Bureaucrat test("pepe", 0);
    }
    catch (std::exception & err) {
        std::cout << "ERROR: " << err.what() << std::endl;
    }

    return (0);
}
