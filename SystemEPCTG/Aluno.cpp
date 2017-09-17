#include "stdafx.h"
#include "Aluno.h"

Aluno::Aluno(string registry, string name, string dateOfBirth, Address address, string photo) : Person(name, dateOfBirth, address, photo) {
	this->registry = registry;
}