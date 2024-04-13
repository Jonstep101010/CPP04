#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog"), brain(new Brain()) {
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& src) {
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called\n";
}

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