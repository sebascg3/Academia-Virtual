#pragma once
#include "NodoCurso.h"
#include <iostream>

class ListaCurso {
private:
    NodoCurso* cabeza;

public:
    ListaCurso();

    ~ListaCurso();

    void agregarCurso(const Curso& curso);
    bool eliminarCurso(const string& id);
    void mostrarCursos() const;
    bool estaVacia() const;
};
