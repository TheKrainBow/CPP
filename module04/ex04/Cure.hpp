#ifndef CURE_H
#define CURE_H
	
#include "AMateria.hpp"

class Cure : virtual public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure &toCopy);
		~Cure();
		Cure &operator=(const Cure &toCopy);
	
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);

};
#endif