#include "span.hpp"
#include <exception>
#include <iostream>

int main()
{
    Span span(4);

    span.addNumber(42);
    try
    {
        span.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    span.addNumber(12);
    span.addNumber(120);
    span.addNumber(200);

    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;

    return 0;
}
