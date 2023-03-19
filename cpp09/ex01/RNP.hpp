#ifndef RNP_HPP
#define RNP_HPP

#include <iostream>
#include <stack>

class RNP
{
  public:
    RNP();
    ~RNP();
    void push(int num);
    void operate(char operation);
    void print() { std::cout << stack.top() << std::endl; }

  private:
    std::stack<int> stack;
};

#endif // !RNP_HPP
