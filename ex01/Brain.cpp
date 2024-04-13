#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() {}

Brain::Brain(const Brain& src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain& Brain::operator=(Brain const& rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = rhs.ideas[i];
		}
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