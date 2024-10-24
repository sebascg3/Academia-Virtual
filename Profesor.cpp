#include "Profesor.h"

// Constructor por defecto
Profesor::Profesor() : Persona(), gradoAcademico("") {}

// Constructor con parámetros
Profesor::Profesor(string nombre, string id, string numeroTelefono, string email, string gradoAcademico)
    : Persona(nombre, id, numeroTelefono, email), gradoAcademico(gradoAcademico) {}

// Setter y getter para grado académico
void Profesor::setGradoAcademico(const string& gradoAcademico) {
    this->gradoAcademico = gradoAcademico;
}

string Profesor::getGradoAcademico() const {
    return gradoAcademico;
}

// Sobrescribir el método toString
string Profesor::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Grado Académico: " << gradoAcademico;
    return ss.str();
}
