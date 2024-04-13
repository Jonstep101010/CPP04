#include "WrongAnimal.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
	: type("WrongAnimal") {}

WrongAnimal::WrongAnimal(std::string type)
	: type(type) {}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs) {
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string WrongAnimal::getType() const { return type; }

/* ************************************************************************** */