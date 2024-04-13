#include "Cat.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal("Cat"), brain(new Brain()) {}

Cat::Cat(const Cat& src) {
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called\n";
}

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