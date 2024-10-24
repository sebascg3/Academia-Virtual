#pragma once
#include "Persona.h"
class Estudiante :public Persona{
private:
	string especialidad;
public:
	Estudiante();
	Estudiante(string,string,string,string,string);
	void setEspecialidad(const string& especialidad);
	string getEspecialidad() const;
	string toString() const;
};

