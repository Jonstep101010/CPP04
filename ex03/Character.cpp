#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
	: inventory()
	, unequipped(NULL)
	, unequippedSize(0)
	, unequippedCapacity(0) {
	for (int i = 0; i < SIZE_INVENTORY; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(std::string Name)
	: inventory()
	, Name(Name)
	, unequipped(NULL)
	, unequippedSize(0)
	, unequippedCapacity(0) {
	for (int i = 0; i < SIZE_INVENTORY; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(const Character& src)
	: inventory()
	, unequipped(NULL)
	, unequippedSize(0)
	, unequippedCapacity(0) {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
	for (int i = 0; i < SIZE_INVENTORY; i++) {
		if (inventory[i] != NULL) {
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	if (unequipped != NULL) {
		delete[] unequipped;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character& Character::operator=(Character const& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < SIZE_INVENTORY; i++) {
			if (inventory[i] != NULL) {
				delete inventory[i];
				inventory[i] = NULL;
			}
			if (rhs.inventory[i] != NULL) {
				inventory[i] = rhs.inventory[i]->clone();
			}
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* target) {
	// do something with target
	(void)target;
	for (int i = 0; i < SIZE_INVENTORY; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = target;
			return;
		}
	}
	// if no empty slot, do nothing (caller needs to handle)
}

void Character::unequip(int idx) {
	// do something to unequip (store somewhere else)
	(void)idx;
	if (inventory[idx] != NULL) {
		// add to array unequipped
		addUnequipped(inventory[idx]);
		// remove from inventory
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	// do something to use...
	if (inventory[idx] != NULL) {
		inventory[idx]->use(target);
	}
}

// functions to dynamically allocate memory for unequipped array

void Character::addUnequipped(AMateria* target) {
	if (unequippedSize == unequippedCapacity) {
		// reallocate memory
		// double capacity
		if (unequippedCapacity == 0) {
			unequippedCapacity = 1;
			unequippedSize     = 0;
		}
		unequippedCapacity *= 2;
		// copy old array to new array
		AMateria** newUnequipped
			= new AMateria*[unequippedCapacity];
		for (int i = 0; i < unequippedSize; i++) {
			newUnequipped[i] = unequipped[i];
		}
		// delete old array
		delete[] unequipped;
		// assign new array to old array
		unequipped = newUnequipped;
	}
	unequipped[unequippedSize] = target;
	unequippedSize++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const& Character::getName() const {
	return this->Name;
}

/* ************************************************************************** */