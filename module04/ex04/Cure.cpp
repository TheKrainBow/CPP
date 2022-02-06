#include "Cure.hpp"  

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure's constructor" << std::endl;
}
	
Cure::~Cure()
{
	//std::cout << "Cure's destructor" << std::endl;
}

Cure::Cure(const Cure &toCopy) : AMateria("cure")
{
	*this = toCopy;
}

Cure	&Cure::operator=(const Cure &toCopy)
{
	_type = toCopy._type;
	return *this;
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