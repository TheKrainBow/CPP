#include "Character.hpp"  
	
Character::Character(std::string name) : _name(name)
{
	std::cout << name << "'s constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
}
	
Character::~Character()
{
	std::cout << _name << "'s destructor" << std::endl;
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
	std::cout << Character::getName() << " unequiped " << _inventory[idx]->getType() << "." << std::endl;
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx] != 0)
		_inventory[idx]->use(target);
}
