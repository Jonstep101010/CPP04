#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(WrongCat const& src);
	~WrongCat();

	WrongCat& operator=(WrongCat const& rhs);

	static void makeSound();

private:
	std::string type;
};
