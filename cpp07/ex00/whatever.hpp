#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &o1, T &o2)
{
    T tmp;

    tmp = o1;
    o1 = o2;
    o2 = tmp;
    return;
}

template <typename T> T min(T &o1, T &o2) { return o1 >= o2 ? o2 : o1; }

template <typename T> T max(T &o1, T &o2) { return o1 <= o2 ? o2 : o1; }

#endif
