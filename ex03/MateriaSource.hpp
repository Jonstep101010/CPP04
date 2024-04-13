#pragma once

#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	MateriaSource(MateriaSource const& src);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const& rhs);

	virtual void      learnMateria(AMateria* src);
	virtual AMateria* createMateria(std::string const& type);

private:
};
