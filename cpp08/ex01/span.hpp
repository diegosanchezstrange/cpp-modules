#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <cstddef>
#include <limits>
#include <vector>

class Span
{
  private:
    std::size_t len;
    std::vector<int> v;

  public:
    Span();
    ~Span();
    Span(std::size_t N);
    Span(const Span &o);
    Span &operator=(const Span &o);

    void addNumber(int n);

    int shortestSpan() const;
    int longestSpan() const;

    std::size_t getSize() const;

    class SpanIsFullException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };

    class SpanIsTooSmallException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
};

#endif // SPAN_HPP
