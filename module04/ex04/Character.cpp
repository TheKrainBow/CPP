#include "Character.hpp"  

Character::Character(std::string name) : _name(name)
{
	//std::cout << name << "'s constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character() : _name("Default")
{
	//std::cout << _name << "'s constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	//std::cout << _name << "'s destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j > i; j--)
			if (_inventory[j] == _inventory[i])
				_inventory[j] = NULL;
		if (_inventory[i])
			delete _inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	int	i;

	i = -1;
	while (++i < 4 && _inventory[i] != 0);
	if (i == 4)
		return ;
	_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	std::cout << Character::getName() << " unequiped " << _inventory[idx]->getType() << "." << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

Character::Character(Character &toCopy) : _name("Default")
{
	//std::cout << _name << "'s constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = toCopy;
}

Character &Character::operator=(Character &toCopy)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 4; i++)
		if (toCopy._inventory[i])
			_inventory[i] = toCopy._inventory[i]->clone();
	_name = toCopy.getName();
	return *this;
}