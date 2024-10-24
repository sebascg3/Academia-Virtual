#include "Profesor.h"


Profesor::Profesor() : Persona(), gradoAcademico("") {}


Profesor::Profesor(string nombre, string id, string numeroTelefono, string email, string gradoAcademico)
    : Persona(nombre, id, numeroTelefono, email), gradoAcademico(gradoAcademico) {}


void Profesor::setGradoAcademico(const string) {
    this->gradoAcademico = gradoAcademico;
}

string Profesor::getGradoAcademico() const {
    return gradoAcademico;
}


string Profesor::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Grado Académico: " << gradoAcademico;
    return ss.str();
}
