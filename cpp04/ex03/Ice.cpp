#include "Ice.h"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &obj) {}

Ice &Ice::operator=(const Ice &obj) {}

const std::string &Ice::getType() const {}

AMateria *Ice::clone() const {}

void Ice::use(int &target) {}
