#include "ListaProfesor.h"
#include "ListaProfesor.h"
#include "ListaProfesor.h"

ListaProfesor::ListaProfesor(){}

ListaProfesor::~ListaProfesor() {
    Nodo* actual = cabeza;
    while (actual) {
        Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void ListaProfesor::agregarProfesor(const Profesor& profesor) {
    cabeza = new Nodo(profesor, cabeza);
}

Profesor* ListaProfesor::buscarProfesor(const string& id) {
    Nodo* actual = cabeza;
    while (actual) {
        if (actual->profesor.getId() == id) {
            return &actual->profesor;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}

void ListaProfesor::eliminarProfesor(const string& id) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;
    while (actual && actual->profesor.getId() != id) {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual) {
        if (anterior) anterior->siguiente = actual->siguiente;
        else cabeza = actual->siguiente;
        delete actual;
    }
}

void ListaProfesor::mostrarProfesores() const {
    Nodo* actual = cabeza;
    while (actual) {
        actual->profesor.mostrarInformacion();
        actual = actual->siguiente;
    }
}



