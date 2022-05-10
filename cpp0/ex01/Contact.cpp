#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact () {}

Contact::~Contact() {}

void Contact::setContact(std::string firstName
        , std::string lastName
        , std::string nickname
        , std::string phoneNumber
        , std::string darkSecret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkSecret = darkSecret;
}

std::string getString(std::string str)
{
    if (str.length() < 10)
        return (str);
    return (str.substr(0,9) + ".");
}

void Contact::printTable(int index)
{
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << getString(this->firstName);
    std::cout << "|" << std::setw(10) << getString(this->lastName);
    std::cout << "|" << std::setw(10) << getString(this->nickname) << "|" << std::endl;
}

void Contact::printData()
{
    std::cout << "First Name   : " << this->firstName << std::endl;
    std::cout << "Last Name    : " << this->lastName << std::endl;
    std::cout << "Nickname     : " << this->nickname << std::endl;
    std::cout << "Phone Number : " << this->phoneNumber << std::endl;
    std::cout << "Dark Secret  : " << this->darkSecret << std::endl;
}