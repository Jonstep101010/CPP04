#pragma once

#include "AMateria.hpp"
class IMateriaSource {

public:
	IMateriaSource();
	IMateriaSource(IMateriaSource const& src);
	virtual ~IMateriaSource();
	virtual void      learnMateria(AMateria*)                = 0;
	virtual AMateria* createMateria(std::string const& type) = 0;

	IMateriaSource& operator=(IMateriaSource const& rhs);

private:
};
