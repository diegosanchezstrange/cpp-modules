#include <iostream>

class	Contact
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkSecret;

	public:
		Contact(std::string, std::string, std::string, std::string, std::string) ;
		~Contact() ;
};
