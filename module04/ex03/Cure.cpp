#include "Cure.hpp"  

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure's constructor" << std::endl;
}
	
Cure::~Cure()
{
	std::cout << "Cure's destructor" << std::endl;
}

AMateria *Cure::clone(void) const
{
	AMateria *dest = new Cure();
	return (dest);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}