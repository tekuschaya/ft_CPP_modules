#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
}

MateriaSource::MateriaSource(MateriaSource const &materia)
{
	*this = materia;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materia)
{
	for (int i = 0; i < 4; i++)
		delete this->materia[i];
	for (int i = 0; i < 4; i++)
	{
		if (materia.materia[i])
			this->materia[i] = materia.materia[i]->clone();
		else
			this->materia[i] = nullptr;
	}
	return (*this);
}

void MateriaSource::learnMateria (AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = materia;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i]->getType() == type)
			return (this->materia[i]->clone());
	}
	return (nullptr);
}