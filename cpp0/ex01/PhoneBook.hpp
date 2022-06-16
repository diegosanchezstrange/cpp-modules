#include <iostream>
#include "Contact.hpp"

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

class PhoneBook
{
	Contact *contacts[8];

	public:
		PhoneBook();
		~PhoneBook();

        void	ft_new_contact();
        void	ft_list_contacts();

    private:
            int size;
};

#endif /* __PHONEBOOK_H__ */
