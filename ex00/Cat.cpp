#include "Cat.hpp"

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
	//if ( this != &rhs )
	//{
	//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream& operator<<(std::ostream& o, Cat const& i) {
	//o << "Value = " << i.getValue();
	return o;
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