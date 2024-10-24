#include "Estudiante.h"


Estudiante::Estudiante() : Persona(), especialidad("") {}


Estudiante::Estudiante(string nombre, string id, string numeroTelefono, string email, string especialidad)
    : Persona(nombre, id, numeroTelefono, email), especialidad(especialidad) {}


void Estudiante::setEspecialidad(const string especialidad) {
    this->especialidad = especialidad;
}

string Estudiante::getEspecialidad() const {
    return especialidad;
}


string Estudiante::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Especialidad: " << especialidad;
    return ss.str();
}
