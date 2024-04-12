#pragma once

#include <string>

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const& src);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(WrongAnimal const& rhs);

	std::string getType() const;

	virtual void makeSound() const;

private:
	std::string type;
};
