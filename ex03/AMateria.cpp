#include "AMateria.hpp"
#include <iostream>
#include <string>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type)
	: type(type) {}

AMateria::AMateria(const AMateria& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria& AMateria::operator=(AMateria const& rhs) {
	if (this != &rhs) {
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const& AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << "* shoots at " << target.getName() << std::endl;
}

/* ************************************************************************** */