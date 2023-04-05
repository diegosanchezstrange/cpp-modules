#include "RNP.hpp"

RNP::RNP() {}

RNP::~RNP() {}

void RNP::push(float num) { stack.push(num); }

void RNP::operate(char operation)
{
    if (stack.size() < 2)
    {
        std::cout << "Not enough numbers in stack" << std::endl;
        exit(1);
    }
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
    if (stack.empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }
    if (stack.size() > 1)
    {
        std::cout << "Stack is not empty" << std::endl;
        return;
    }
    std::cout << stack.top() << std::endl;
    stack.pop();
}
