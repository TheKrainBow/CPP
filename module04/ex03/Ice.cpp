#include "Ice.hpp"  

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice's constructor" << std::endl;
}
	
Ice::~Ice()
{
	std::cout << "Ice's destructor" << std::endl;
}

AMateria *Ice::clone(void) const
{
	AMateria *dest = new Ice();
	return (dest);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}