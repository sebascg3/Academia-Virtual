#include "Estudiante.h"


Estudiante::Estudiante() : Persona(), especialidad("") {}


Estudiante::Estudiante(string nombre, string id, string numeroTelefono, string email, string especialidad)
    : Persona(nombre, id, numeroTelefono, email), especialidad(especialidad) {}

Estudiante::~Estudiante(){
    delete cursos;
}


void Estudiante::setEspecialidad(const string especialidad) {
    this->especialidad = especialidad;
}

string Estudiante::getEspecialidad() const {
    return especialidad;
}

void Estudiante::mostrarCursos() const {
    if (cursos->estaVacia()) {
        cout << "No hay cursos matriculados." << endl;
        return;
    }

    cout << "Cursos matriculados:" << endl;
    cursos->mostrarGrupos(); // Suponiendo que tienes un método en ListaCurso que muestra los cursos
}


string Estudiante::toString() const {
    stringstream ss;
    ss << Persona::toString() << ", Especialidad: " << especialidad;
    return ss.str();
}
