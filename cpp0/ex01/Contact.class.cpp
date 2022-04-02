#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact (std::string firstName
		, std::string lastName
		, std::string nickname
		, std::string phoneNumber
		, std::string darkSecret
		)
{
	this.firstName = firstName;
	this.lastName = lastName;
	this.nickname = nickname;
	this.phoneNumber = phoneNumber;
	this.darkSecret = darkSecret;
}
