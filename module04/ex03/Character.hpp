#ifndef CHARACTER_H
#define CHARACTER_H
	
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : virtual public ICharacter
{
	private:
		const std::string _name;
		AMateria *_inventory[4];
	public:
		Character(std::string name);
		~Character();
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);

};
#endif