#include "Estudiante.h"

// Constructor por defecto
Estudiante::Estudiante() : Persona(), especialidad("") {}

// Constructor con parámetros
Estudiante::Estudiante(string nombre, string id, string numeroTelefono, string email, string especialidad)
    : Persona(nombre, id, numeroTelefono, email), especialidad(especialidad) {}

// Setter y getter para especialidad
void Estudiante::setEspecialidad(const string& especialidad) {
    this->especialidad = especialidad;
}

string Estudiante::getEspecialidad() const {
    return especialidad;
}

// Sobrescribir el método toString
string Estudiante::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Especialidad: " << especialidad;
    return ss.str();
}
