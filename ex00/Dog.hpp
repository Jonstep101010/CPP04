#pragma once

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

public:
	Dog();
	Dog(Dog const& src);
	~Dog();

	Dog& operator=(Dog const& rhs);

	void         makeSound() const;
	std::string& getType();

private:
	std::string type;
};

std::ostream& operator<<(std::ostream& o, Dog const& i);
