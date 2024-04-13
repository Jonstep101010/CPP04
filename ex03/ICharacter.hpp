#pragma once

#include "AMateria.hpp"
#include <string>

class AMateria;

class ICharacter {

public:
	virtual ~ICharacter() {}
	virtual std::string const& getName() const  = 0;
	virtual void               equip(AMateria*) = 0;

	// must not delete Materia
	virtual void unequip(int idx)                 = 0;

	virtual void use(int idx, ICharacter& target) = 0;
	ICharacter();
	ICharacter(ICharacter const& src);

	ICharacter& operator=(ICharacter const& rhs);

private:
	// hold templates
};
