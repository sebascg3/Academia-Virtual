#pragma once
#include "Persona.h"
class Profesor :public Persona{
private:
	string gradoAcademico;
public:
	Profesor();
	Profesor(string, string, string, string, string);
	void setGradoAcademico(const string& gradoAcademico);
	string getGradoAcademico() const;
	string toString() const;
};

