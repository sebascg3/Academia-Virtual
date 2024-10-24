#include "Profesor.h"

// Constructor por defecto
Profesor::Profesor() : Persona(), gradoAcademico("") {}

// Constructor con par�metros
Profesor::Profesor(string nombre, string id, string numeroTelefono, string email, string gradoAcademico)
    : Persona(nombre, id, numeroTelefono, email), gradoAcademico(gradoAcademico) {}

// Setter y getter para grado acad�mico
void Profesor::setGradoAcademico(const string& gradoAcademico) {
    this->gradoAcademico = gradoAcademico;
}

string Profesor::getGradoAcademico() const {
    return gradoAcademico;
}

// Sobrescribir el m�todo toString
string Profesor::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Grado Acad�mico: " << gradoAcademico;
    return ss.str();
}
