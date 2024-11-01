#pragma once
#include "NodoEstudiante.h"
#include <iostream>

class ListaEstudiante {
private:
    NodoEst* cabeza;

public:
    ListaEstudiante();

    ~ListaEstudiante();

    void agregarEstudiante(const Estudiante& curso);
    Estudiante* buscarEstudiante(const string& id);
    bool eliminarEstudiante(const string& id);
    void mostrarEstudiantes() const;
    bool estaVacia() const;
};