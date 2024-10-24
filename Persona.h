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
    void setNombre(const string);
    void setId(const string);
    void setNumeroTelefono(const string);
    void setEmail(const string);


    string getNombre() const;
    string getId() const;
    string getNumeroTelefono() const;
    string getEmail() const;

 
    virtual string toString() const;
};

