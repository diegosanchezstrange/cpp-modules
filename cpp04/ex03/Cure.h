#ifndef CURE_H
#define CURE_H

#include "AMateria.h"

class Cure: public AMateria
{

public:
	Cure();
	~Cure();
	Cure(Cure const &obj);

	Cure &operator=(Cure const &obj);

	AMateria * clone() const;
	void use(ICharacter & target);
};


#endif //CURE_H
