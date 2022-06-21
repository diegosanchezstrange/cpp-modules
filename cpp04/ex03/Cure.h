//
// Created by diego on 19/6/22.
//

#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure: public AMateria
{

public:
	Cure();
	~Cure();
	Cure(std::string const & type);
	Cure(Cure const &obj);

	Cure &operator=(Cure const &obj);

	std::string const & getType() const;

	AMateria * clone() const;
	void use(ICharacter & target);
};


#endif //CURE_H
