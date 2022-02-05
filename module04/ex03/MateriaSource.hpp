#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
    private:
		AMateria *_inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &toCopy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &toCopy);
        virtual void learnMateria(AMateria *);
        virtual AMateria* createMateria(std::string const & type);
};
#endif