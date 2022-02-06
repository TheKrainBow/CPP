#include "Ice.hpp"  

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice's constructor" << std::endl;
}
	
Ice::~Ice()
{
	//std::cout << "Ice's destructor" << std::endl;
}

Ice::Ice(const Ice &toCopy) : AMateria("ice")
{
	*this = toCopy;
}

Ice		&Ice::operator=(const Ice &toCopy)
{
	_type = toCopy._type;
	return *this;
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