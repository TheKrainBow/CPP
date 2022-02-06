#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource's constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
	
MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource's destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	//std::cout << "MateriaSource Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = toCopy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 4; i++)
		if (toCopy._inventory[i])
			_inventory[i] = toCopy._inventory[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *toLearn)
{
    //std::cout << "Learning new Materia" << std::endl;
	int	i;

	i = -1;
	while (++i < 4 && _inventory[i] != 0);
	if (i == 4)
		return ;
	_inventory[i] = toLearn;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    //std::cout << "Create new Materia" << std::endl;
	if (type.c_str() == NULL)
		return (NULL);
    for (int i = 0; i < 4; i++)
        if (_inventory[i] && type.compare(_inventory[i]->getType()) == 0)
            return (_inventory[i]->clone());
    return (NULL);
}