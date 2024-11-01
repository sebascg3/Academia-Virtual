#pragma once
#include "Persona.h"
#include "ListaCurso.h"
class Estudiante :public Persona{
private:
	string especialidad;
	ListaCurso* cursos;
public:
	Estudiante();
	Estudiante(string,string,string,string,string);
	~Estudiante();
	void setEspecialidad(const string);
	string getEspecialidad() const;
	void mostrarCursos() const;
	string toString() const;
};

