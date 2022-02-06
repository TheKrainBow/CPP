#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"
	
class Ice : virtual public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice &toCopy);
		~Ice();
		Ice &operator=(const Ice &toCopy);
	
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};
#endif