#pragma once

#include "ICharacter.hpp"
#include <string>

class ICharacter;
class Character;

class AMateria {

public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	virtual ~AMateria();

	// Returns the materia type
	std::string const& getType() const;

	virtual AMateria* clone() const = 0;
	virtual void      use(ICharacter& target);

	AMateria& operator=(AMateria const& rhs);

private:
};
