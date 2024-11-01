#include "ListaEstudiante.h"
#include <iostream>

ListaEstudiante::~ListaEstudiante() {
    Nodo* actual = cabeza;
    while (actual) {
        Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void ListaEstudiante::agregarEstudiante(const Estudiante& estudiante) {
    cabeza = new Nodo(estudiante, cabeza);
}

Estudiante* ListaEstudiante::buscarEstudiante(const string& id) {
    Nodo* actual = cabeza;
    while (actual) {
        if (actual->estudiante.getId() == id) {
            return &actual->estudiante;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaEstudiante::eliminarEstudiante(const string& id) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;
    while (actual && actual->estudiante.getId() != id) {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual) {
        if (anterior) anterior->siguiente = actual->siguiente;
        else cabeza = actual->siguiente;
        delete actual;
    }
}

void ListaEstudiante::mostrarEstudiantes() const {
    Nodo* actual = cabeza;
    while (actual) {
        actual->estudiante.mostrarInformacion();
        actual = actual->siguiente;
    }
}
