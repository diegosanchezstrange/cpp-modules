#include "RNP.hpp"

RNP::RNP() {}

RNP::~RNP() {}

void RNP::push(float num) { stack.push(num); }

void RNP::operate(char operation)
{
    float num1 = stack.top();
    stack.pop();
    float num2 = stack.top();
    stack.pop();
    switch (operation)
    {
    case '+':
        stack.push(num2 + num1);
        break;
    case '-':
        stack.push(num2 - num1);
        break;
    case '*':
        stack.push(num2 * num1);
        break;
    case '/':
        stack.push(num2 / num1);
        break;
    }
}

void RNP::print()
{
    std::cout << stack.top() << std::endl;
    stack.pop();
}
