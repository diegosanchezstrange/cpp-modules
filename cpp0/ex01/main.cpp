#include <iostream>
#include <string>
#include "Contact.class.hpp"

void	ft_add_contact(Contact *contact)
{
	std::string	components [5];
	std::string	nombres [5] = {"First Name", "Last Name",
	   	"Nickname", "Phone Number", "Dark Secret"};

	for (int i = 0 ; i < 5 ; i++)
	{
		while (components[i].empty())
		{
			std::cout << "Enter " + nombres[i] + " :" + components[i] +  ": ";
			std::getline(std::cin, components[i]);
		}
	}
}

void	ft_list_contacts()
{}

int	main(void)
{
	std::string	cmd;
	Contact*	contact;

	while (cmd != "EXIT")
	{
		std::cout << "Type CMD : " ;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			ft_add_contact(contact);
		else if (cmd == "SEARCH")
			ft_list_contacts();
	}
	return (0);
}
