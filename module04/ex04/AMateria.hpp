#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria  
{
	protected:
		std::string _type;
	public:
		AMateria(AMateria &toCopy);
		AMateria();
		virtual ~AMateria();
		AMateria &operator=(AMateria &toCopy);
	
		AMateria(std::string const &type);
		virtual std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};
#endif