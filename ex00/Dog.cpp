#include "Dog.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog") {}

Dog::Dog(const Dog& src)
	: Animal("Dog") {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() { std::cout << "Dog destructor called\n"; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const& rhs) {
	if (this != &rhs) {
		Animal::operator=(rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const { std::cout << "Woof!\n"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string& Dog::getType() { return type; }

/* ************************************************************************** */