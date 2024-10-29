#include "Grupo.h"


Grupo::Grupo() : numeroGrupo(0), capacidad(0), cantidadAlumnos(0), horario(Horario()), profesor(nullptr) {}


Grupo::Grupo(int _numeroGrupo, int _capacidad, int _cantidadAlumnos, const Horario& _horario, Profesor* _profesor)
    : numeroGrupo(_numeroGrupo), capacidad(_capacidad), cantidadAlumnos(_cantidadAlumnos), horario(_horario), profesor(_profesor) {}


int Grupo::getNumeroGrupo() const {
    return numeroGrupo;
}

int Grupo::getCapacidad() const {
    return capacidad;
}

int Grupo::getCantidadAlumnos() const {
    return cantidadAlumnos;
}

Horario Grupo::getHorario() const {
    return horario;
}

Profesor* Grupo::getProfesor() const {
    return profesor;
}


void Grupo::setNumeroGrupo(int _numeroGrupo) {
    numeroGrupo = _numeroGrupo;
}

void Grupo::setCapacidad(int _capacidad) {
    capacidad = _capacidad;
}

void Grupo::setCantidadAlumnos(int _cantidadAlumnos) {
    cantidadAlumnos = _cantidadAlumnos;
}

void Grupo::setHorario(const Horario& _horario) {
    horario = _horario;
}

void Grupo::setProfesor(Profesor* _profesor) {
    profesor = _profesor;
}


string Grupo::mostrarInformacion() const {
    stringstream ss;
    ss << "Grupo: " << numeroGrupo << "\nCapacidad: " << capacidad << "\nCantidad de Alumnos: " << cantidadAlumnos
        << "\nHorario: " << horario.mostrarHorario() << "\nProfesor: ";
    if (profesor) {
        ss << profesor->getNombre();
    }
    else {
        ss << "No asignado";
    }
    ss << endl;
    return ss.str();
}

void Grupo::estaLleno() const {
    if (cantidadAlumnos >= capacidad) {
        cout << "El grupo esta lleno." << endl;
    }
    else {
        cout << "El grupo aun tiene cupo." << endl;
    }
}