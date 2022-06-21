#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice: public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &obj);

	Ice &operator=(Ice const &obj);

	AMateria * clone() const;
	void use(ICharacter & target);
};


#endif //ICE_H
