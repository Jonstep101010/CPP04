#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
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
	AMateria* source_inventory[4];
};
