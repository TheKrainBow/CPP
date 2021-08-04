#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria  
{
	protected:
		std::string const _type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		virtual std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
#endif