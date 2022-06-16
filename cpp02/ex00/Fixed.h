//
// Created by diego on 29/05/22.
//

#ifndef FIXED_H
#define FIXED_H


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


#endif //FIXED_H
