//
// Created by diego on 29/05/22.
//

#ifndef FIXED_H
#define FIXED_H

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

        // RAW BITS
        int getRawBits() const;
        void setRawBits(int const raw);

        // CONVERSION
        int toInt(void) const;
        float toFloat(void) const;

        // MAX AND MIN
        static Fixed& max(Fixed& obj1, Fixed& obj2);
        static Fixed const & max(const Fixed& obj1, const Fixed& obj2);

        static Fixed& min(Fixed& obj1, Fixed& obj2);
        static Fixed const & min(const Fixed& obj1, const Fixed& obj2);

        // OPERATORS
        Fixed& operator=(const Fixed& fixed);

        Fixed& operator++( );
        Fixed operator++(int);
        Fixed& operator--( );
        Fixed operator--(int);

        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator>(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;

        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;
};

std::ostream & operator<<(std::ostream &out, const Fixed& fixed);

#endif //FIXED_H
