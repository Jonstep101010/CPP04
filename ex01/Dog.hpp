#pragma once

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	Dog(Dog const& src);
	~Dog();

	Dog& operator=(Dog const& rhs);

	std::string& getType();

	void makeSound() const;

private:
	std::string type;
};

