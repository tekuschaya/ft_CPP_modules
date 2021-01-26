#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const &materia);
		MateriaSource &operator=(MateriaSource const &materia);

		virtual void learnMateria (AMateria *);
		virtual AMateria *createMateria(std::string const &type);
};

#endif