//
// Created by diego on 29/05/22.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H

#include <iostream>

class Fixed
{
    private:
        static const int    fraction = 8;
        int                 value;
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;

};

std::ostream & operator<<(std::ostream &out, const Fixed& fixed);

#endif //EX00_FIXED_H
