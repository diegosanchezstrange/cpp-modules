//
// Created by diego on 29/05/22.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H


class Fixed
{
    private:
        static const int    fraction;
        int                 value;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        int getRawBits() const;
        void setRawBits(int const raw);

};


#endif //EX00_FIXED_H
