#ifndef RNP_HPP
#define RNP_HPP

#include <iostream>
#include <stack>

class RNP
{
  public:
    RNP();
    ~RNP();
    void push(float num);
    void operate(char operation);
    void print();

  private:
    std::stack<float> stack;
};

#endif // !RNP_HPP
