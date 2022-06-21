#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class AMateria
{

protected:
	std::string type;

public:
	AMateria();
	~AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &obj);

	AMateria &operator=(AMateria const &obj);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use (ICharacter & target);
};


#endif //AMATERIA_H
