#pragma once

#include <string>

class Animal {

public:
	Animal();
	Animal(std::string type);
	Animal(Animal const& src);
	virtual ~Animal();

	Animal&      operator=(Animal const& rhs);
	virtual void makeSound() const;
	std::string  getType() const;

protected:
	std::string type;
};
