#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T> typename T::iterator easyfind(T &container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    return it;
}

#endif // !EASYFIND_HPP
