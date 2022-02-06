#include "AMateria.hpp"  

AMateria::AMateria() {}
AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::~AMateria() {}

AMateria::AMateria(AMateria &toCopy)
{
	*this = toCopy;
}


AMateria &AMateria::operator=(AMateria &toCopy)
{
	_type = toCopy._type;
	return *this;
}


std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* Tried to use a Materia on " << target.getName() << ", but Materia is undefined *" << std::endl;
}