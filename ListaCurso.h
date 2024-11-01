#pragma once
#include "Curso.h"
#include <iostream>
#include <string>

class ListaCurso {
private:
    class Nodo {
    public:
        Curso curso;
        Nodo* siguiente;

        Nodo(const Curso& curso);  // Constructor
    };

    Nodo* cabeza;

public:
    ListaCurso();                  // Constructor
    ~ListaCurso();                 // Destructor

    void agregarCurso(const Curso& curso);
    bool eliminarCurso(const std::string& id);
    void mostrarCursos() const;
    bool estaVacia() const;
};
