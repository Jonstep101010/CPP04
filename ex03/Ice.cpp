#include "Ice.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice()
	: AMateria("ice") {}

Ice::Ice(const Ice& src)
	: AMateria("ice") {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice& Ice::operator=(Ice const& rhs) {
	if (this != &rhs) {
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */