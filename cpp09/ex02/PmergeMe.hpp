#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>

class PmergeMe
{
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    void mergeMeVector(std::vector<int> &v, int start, int end, int k);
    void mergeMeList(std::list<int> &l, int start, int end, int k);

  private:
};

#endif // !PMERGEME_HPP
