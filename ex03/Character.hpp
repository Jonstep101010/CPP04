#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

#define SIZE_INVENTORY 4

class Character : public ICharacter {

public:
	std::string const& getName() const;
	virtual void       equip(AMateria*);

	virtual void unequip(int idx);

	virtual void use(int idx, ICharacter& target);
	Character();
	Character(std::string Name);
	Character(Character const& src);
	~Character();

	Character& operator=(Character const& rhs);

	// Inventory of 4 slots (4 Materias at most), should be empty at construction
	// any type of Materia

private:
	AMateria*   inventory[SIZE_INVENTORY];
	std::string Name;
	AMateria**  unequipped;
	int         unequippedSize;
	int         unequippedCapacity;
	void        addUnequipped(AMateria* target);
};
