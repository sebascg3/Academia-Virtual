#include "Curso.h"


Curso::Curso() : nombre(""), id(""), horas(0), precio(0.0), estado("Inactivo") {}


Curso::Curso(string nombre, string id, int horas, double precio, string estado)
    : nombre(nombre), id(id), horas(horas), precio(precio), estado(estado) {}


string Curso::getNombre() const {
    return nombre;
}

string Curso::getId() const {
    return id;
}

int Curso::getHoras() const {
    return horas;
}

double Curso::getPrecio() const {
    return precio;
}

string Curso::getEstado() const {
    return estado;
}


void Curso::setNombre(const string _nombre) {
    nombre = _nombre;
}

void Curso::setId(const string _id) {
    id = _id;
}

void Curso::setHoras(int _horas) {
    horas = _horas;
}

void Curso::setPrecio(double _precio) {
    precio = _precio;
}

void Curso::setEstado(const string _estado) {
    estado = _estado;
}


string Curso::toString() const {
    stringstream ss;
    ss << "Curso: " << nombre << "\nID: " << id << "\nHoras: " << horas
        << "\nPrecio: " << precio << "\nEstado: " << estado << endl;
    return ss.str();
}
