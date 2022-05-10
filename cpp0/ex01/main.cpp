#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phoneBook;

	while (std::cout << "Type CMD : ", std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
            phoneBook.ft_new_contact();
		else if (cmd == "SEARCH")
			phoneBook.ft_list_contacts();
        else if (cmd == "EXIT")
            break;
	}
	return (0);
}
