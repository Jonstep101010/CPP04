#include "Cat.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
	: Animal("Cat") {
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& src)
	: Animal("Cat") {
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() { std::cout << "Cat destructor called\n"; }

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