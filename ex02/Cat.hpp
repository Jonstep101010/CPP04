#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
	Cat();
	Cat(Cat const& src);
	~Cat();

	Cat& operator=(Cat const& rhs);

	void         makeSound() const;
	std::string& getType();

private:
	std::string type;
	Brain*      brain;
};
