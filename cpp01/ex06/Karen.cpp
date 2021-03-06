#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug(void) {
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string levels[] = {"debug","info", "warning",  "error"};
    void (Karen::*f[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int lvl = -1;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i].compare(level) == 0)
            lvl = i;
    }
    switch (lvl)
    {
        case 0:
            (this->*f[0])();
        case 1:
            (this->*f[1])();
        case 2:
            (this->*f[2])();
        case 3:
            (this->*f[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

