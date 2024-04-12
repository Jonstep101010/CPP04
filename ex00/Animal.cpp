#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
	: type("default") {
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type)
	: type(type) {
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& src) {
	std::cout << "Animal copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() { std::cout << "Animal destructor called\n"; }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal& Animal::operator=(Animal const& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */