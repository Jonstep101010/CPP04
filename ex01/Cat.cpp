#include "Cat.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal("Cat") {}

Cat::Cat(const Cat& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const& rhs) {
	if (this != &rhs) {
		Animal::operator=(rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const { std::cout << "Meow!\n"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string& Cat::getType() { return type; }

/* ************************************************************************** */