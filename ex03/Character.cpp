#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
	: inventory() {}

Character::Character(std::string Name)
	: Name(Name) {
	for (int i = 0; i < SIZE_INVENTORY; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const Character& src)
	: inventory() {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character& Character::operator=(Character const& rhs) {
	if (this != &rhs) {
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* target) {
	// do something with target
	(void)target;
}

void Character::unequip(int idx) {
	// do something to unequip (store somewhere else)
	(void)idx;
}

void Character::use(int idx, ICharacter& target) {
	// do something to use...
	(void)idx;
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const& Character::getName() const {
	return this->Name;
}

/* ************************************************************************** */