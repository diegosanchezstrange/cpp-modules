#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string>

template <typename T> class Array
{
  public:
    Array() : arr(NULL), len(0) { };
    ~Array() { delete[] arr; };
    Array(unsigned int size) : arr(new T[size]), len(size){};
    Array(const Array &o) : arr(NULL) { *this = o; }
    Array &operator=(const Array &o)
    {
        if (this == &o)
        {
            return *this;
        }
        if (this->len != o.len)
        {
            if (this->arr != NULL)
                delete[] this->arr;
            std::cout << "hola" << std::endl;
            this->arr = new T[o.len];
            this->len = o.len;
        }
        std::copy(o.arr, o.arr + this->len, this->arr);
        return (*this);
    };

    T &operator[](int index)
    {
        if (index < 0 || (size_t)index >= this->len)
            throw std::out_of_range("Array index out of range");
        return (this->arr[index]);
    }

    const T &operator[](int index) const
    {
        if (index < 0 || (size_t)index >= this->len)
            throw std::out_of_range("Array index out of range");
        return (this->arr[index]);
    }

    size_t size() const { return (this->len); }

  private:
    T *arr;
    std::size_t len;
};

#endif // !ARRAY_HPP
