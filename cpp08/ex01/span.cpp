#include "span.hpp"
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <iterator>
#include <limits>
#include <vector>

Span::~Span() {}

Span::Span() {}

Span::Span(std::size_t N) : len(N) {}

Span::Span(const Span &o) : len(o.getSize()), v(o.v) { *this = o; }

Span &Span::operator=(const Span &o)
{
    if (this == &o)
        return *this;
    this->v = o.v;
    this->len = o.len;
    return (*this);
}

std::size_t Span::getSize() const { return this->len; }

void Span::addNumber(int n)
{
    if (this->v.size() == this->getSize())
        throw Span::SpanIsFullException();
    this->v.push_back(n);
    std::sort(this->v.begin(), this->v.end());
}

int Span::shortestSpan() const
{
    int shortest;

    if (v.size() < 2)
        throw Span::SpanIsTooSmallException();
    shortest = std::numeric_limits<int>::max();
    for (std::size_t i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
            break;
        if (std::abs(v[i] - v[i + 1]) < shortest)
            shortest = std::abs(v[i] - v[i + 1]);
    }
    return shortest;
}

int Span::longestSpan() const
{
    if (v.size() < 2)
        throw Span::SpanIsTooSmallException();
    return this->v[this->v.size() - 1] - this->v[0];
}

const char *Span::SpanIsFullException::what() const throw()
{
    return "Span is full";
}

const char *Span::SpanIsTooSmallException::what() const throw()
{
    return "Span is too small";
}
