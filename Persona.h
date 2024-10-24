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
    void setNombre(const string& nombre);
    void setId(const string& id);
    void setNumeroTelefono(const string& numeroTelefono);
    void setEmail(const string& email);


    string getNombre() const;
    string getId() const;
    string getNumeroTelefono() const;
    string getEmail() const;

 
    virtual string toString() const;
};

