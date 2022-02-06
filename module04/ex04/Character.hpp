#ifndef CHARACTER_H
#define CHARACTER_H
	
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : virtual public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character();
		Character(Character &toCopy);
		Character &operator=(Character &toCopy);
		~Character();

		Character(std::string name);
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};
#endif