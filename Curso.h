#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Curso{
private:
	string nombre;
	string id;
	int horas;
	double precio;
	string estado;
public:
	Curso();
	Curso(string, string, int, double, string);
	string getNombre() const;
	string getId() const;
	int getHoras() const;
	double getPrecio() const;
	string getEstado() const;

	void setNombre(const string );
	void setId(const string );
	void setHoras(int );
	void setPrecio(double );
	void setEstado(const string );

	string toString() const;
};

