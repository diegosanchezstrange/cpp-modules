#include "RNP.hpp"

RNP::RNP() {}

RNP::~RNP() {}

void RNP::push(int num) { stack.push(num); }

void RNP::operate(char operation)
{
    int num1 = stack.top();
    stack.pop();
    int num2 = stack.top();
    stack.pop();
    switch (operation)
    {
    case '+':
        stack.push(num1 + num2);
        break;
    case '-':
        stack.push(num1 - num2);
        break;
    case '*':
        stack.push(num1 * num2);
        break;
    case '/':
        stack.push(num1 / num2);
        break;
    }
}
