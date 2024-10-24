#include "Persona.h"

// Constructor por defecto
Persona::Persona() : nombre(""), id(""), numeroTelefono(""), email("") {}

// Constructor con par�metros
Persona::Persona(string nombre, string id, string numeroTelefono, string email)
    : nombre(nombre), id(id), numeroTelefono(numeroTelefono), email(email) {}

// Destructor
Persona::~Persona() {}

// Setters
void Persona::setNombre(const string& nombre) {
    this->nombre = nombre;
}

void Persona::setId(const string& id) {
    this->id = id;
}

void Persona::setNumeroTelefono(const string& numeroTelefono) {
    this->numeroTelefono = numeroTelefono;
}

void Persona::setEmail(const string& email) {
    this->email = email;
}

// Getters
string Persona::getNombre() const {
    return nombre;
}

string Persona::getId() const {
    return id;
}

string Persona::getNumeroTelefono() const {
    return numeroTelefono;
}

string Persona::getEmail() const {
    return email;
}

// M�todo toString
string Persona::toString() const {
    stringstream ss;
    ss << "Nombre: " << nombre << ", ID: " << id
        << ", Tel�fono: " << numeroTelefono << ", Email: " << email;
    return ss.str();
}
