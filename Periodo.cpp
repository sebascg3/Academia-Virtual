#include "Periodo.h"

Periodo::Periodo() : numeroPeriodo(0), mesInicio(""), mesFin(""), listaCursos(new ListaCurso) {}


Periodo::Periodo(int numero, const string& inicio, const string& fin)
    : numeroPeriodo(numero), mesInicio(inicio), mesFin(fin), listaCursos(new ListaCurso) {}


Periodo::~Periodo() {
    delete listaCursos;
}


void Periodo::agregarCurso(const Curso& curso) {
    listaCursos->agregarCurso(curso);
}


bool Periodo::eliminarCurso(const string& id) {
    return listaCursos->eliminarCurso(id);
}


void Periodo::mostrarCursos() const {
    listaCursos->mostrarCursos();
}


int Periodo::getNumeroPeriodo() const {
    return numeroPeriodo;
}

string Periodo::getMesInicio() const {
    return mesInicio;
}

string Periodo::getMesFin() const {
    return mesFin;
}
