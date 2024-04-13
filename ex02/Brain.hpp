#pragma once

#include <iostream>
#include <string>

#define NUM_IDEAS 100

class Brain {

public:
	Brain();
	Brain(Brain const& src);
	~Brain();

	Brain&      operator=(Brain const& rhs);
	std::string ideas[NUM_IDEAS];

private:
};
