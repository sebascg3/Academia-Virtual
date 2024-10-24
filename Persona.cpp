#include "Persona.h"


Persona::Persona() : nombre(""), id(""), numeroTelefono(""), email("") {}


Persona::Persona(string nombre, string id, string numeroTelefono, string email)
    : nombre(nombre), id(id), numeroTelefono(numeroTelefono), email(email) {}


Persona::~Persona() {}


void Persona::setNombre(const string nombre) {
    this->nombre = nombre;
}

void Persona::setId(const string id) {
    this->id = id;
}

void Persona::setNumeroTelefono(const string numeroTelefono) {
    this->numeroTelefono = numeroTelefono;
}

void Persona::setEmail(const string email) {
    this->email = email;
}


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


string Persona::toString() const {
    stringstream ss;
    ss << "Nombre: " << nombre << ", ID: " << id
        << ", Teléfono: " << numeroTelefono << ", Email: " << email;
    return ss.str();
}
