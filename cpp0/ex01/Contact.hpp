#include <iostream>

#ifndef __CONTACT_H__
#define __CONTACT_H__
class	Contact
{
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkSecret;
    std::string	firstName;

    public:
		Contact() ;
		~Contact() ;
        void setContact(std::string, std::string, std::string, std::string, std::string);
        void printTable(int index);
        void printData();
};

#endif /* __CONTACT_H__ */
