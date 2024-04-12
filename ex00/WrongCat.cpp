#include "WrongCat.hpp"
#include <iostream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
	: WrongAnimal("WrongCat") {
	// std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& src) {
	// std::cout << "WrongCat copy constructor called\n";
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat& WrongCat::operator=(WrongCat const& rhs) {
	if (this != &rhs) {
		type = rhs.type;
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