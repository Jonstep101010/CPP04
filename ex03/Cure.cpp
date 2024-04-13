#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
	: AMateria("cure") {}

Cure::Cure(const Cure& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure& Cure::operator=(Cure const& rhs) {
	if (this != &rhs) {
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()
			  << "'s wounds *\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */