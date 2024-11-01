#pragma once
#include "NodoProfesor.h"
#include <iostream>

class ListaProfesor {
private:
    NodoProfe* cabeza;

public:
    ListaProfesor();

    ~ListaProfesor();

    void agregarProfesor(const Profesor& curso);
    Profesor* buscarProfesor(const string& id);
    bool eliminarProfesor(const string& id);
    void mostrarProfesores() const;

};