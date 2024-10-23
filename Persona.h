#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Persona{
protected:
	string nombre;
	string id;
	string numeroTelefono;
	string email;
public:
	Persona();
	Persona(string, string, string, string);
	virtual ~Persona();

};

