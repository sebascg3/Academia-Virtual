#pragma once
#include "ListaCurso.h"
#include <string>

using namespace std;

class Periodo {
private:
    int numeroPeriodo;
    string mesInicio;
    string mesFin;
    ListaCurso* listaCursos;

public:
    // Constructores
    Periodo();
    Periodo(int numero, const string& inicio, const string& fin);

    // Destructor
    ~Periodo();

    // M�todos para manejar cursos
    void agregarCurso(const Curso& curso);
    bool eliminarCurso(const string& id);
    void mostrarCursos() const;

    // M�todos de acceso
    int getNumeroPeriodo() const;
    string getMesInicio() const;
    string getMesFin() const;
};
