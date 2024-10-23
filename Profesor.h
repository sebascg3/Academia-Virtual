#pragma once
#include "Persona.h"
class Profesor :public Persona{
private:
	string gradoAcademico;
public:
	Profesor();
	Profesor(string, string, string, string, string);
};

