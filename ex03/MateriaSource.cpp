#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
	: source_inventory() {
	for (int i = 0; i < 4; i++) {
		source_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& src) : source_inventory() {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (source_inventory[i] != NULL) {
			delete source_inventory[i];
			source_inventory[i] = NULL;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource&
MateriaSource::operator=(MateriaSource const& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (source_inventory[i] != NULL) {
				delete source_inventory[i];
				source_inventory[i] = NULL;
			}
			if (rhs.source_inventory[i] != NULL) {
				source_inventory[i]
					= rhs.source_inventory[i]->clone();
			}
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* src) {
	// store materia somewhere
	for (int i = 0; i < 4; i++) {
		// do something with template
		if (source_inventory[i] == NULL) {
			source_inventory[i] = src;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4 && source_inventory[i]; i++) {
		// do something with template
		if (source_inventory[i]->getType() == type) {
			return source_inventory[i]->clone();
		}
	}
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */