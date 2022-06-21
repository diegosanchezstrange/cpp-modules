#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.h"

#include <iostream>

class ICharacter;

class AMateria
{

protected:
	std::string type;

private:
    AMateria();

public:
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &obj);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use (ICharacter & target);
};


#endif //AMATERIA_H
