#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
	: Animal("Dog") {}

Dog::Dog(const Dog& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const& rhs) {
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream& operator<<(std::ostream& o, Dog const& i) {
	//o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() { std::cout << "Woof!\n"; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string& Dog::getType() { return type; }

/* ************************************************************************** */