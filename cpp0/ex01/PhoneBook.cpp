#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->size = 0;
    for (int i = 0 ; i < 8 ; i++)
        this->contacts[i] = new Contact();
}

PhoneBook::~PhoneBook() {}

void PhoneBook::ft_new_contact()
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
    this->contacts[this->size % 8]->setContact(components[0], components[1], components[2], components[3], components[4]);
    this->size++;
}

void PhoneBook::ft_list_contacts()
{
    int         i;
    std::string index;

    i = 0;
    std::cout << "|" << std::setw(10) << "INDEX";
    std::cout << "|" << std::setw(10) << "FirstName";
    std::cout << "|" << std::setw(10) << "LastName";
    std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
    if (this->size == 0)
        return ;
    while(i < this->size && i < 8)
    {
        this->contacts[i]->printTable(i);
        i++;
    }
    std::cout << "Enter index (0 -  " << (this->size >= 8 ? 8 : this->size - 1) << ") : ";
    std::getline(std::cin, index);
    if (index.empty() || !std::isdigit(index[0]) || index.size() != 1)
        return ;
    if (std::stoi(index) > this->size - 1)
        return ;
    this->contacts[std::stoi(index)]->printData();
}
