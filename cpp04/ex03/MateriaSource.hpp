#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

private:
    AMateria    *learnedMaterias[4];
    int         num;
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource &operator=(MateriaSource const &obj);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


#endif //MATERIASOURCE_H
