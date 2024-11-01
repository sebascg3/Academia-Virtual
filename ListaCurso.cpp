#include "ListaCurso.h"

ListaCurso::Nodo::Nodo(const Curso& curso) : curso(curso), siguiente(nullptr) {}

ListaCurso::ListaCurso() : cabeza(nullptr) {}

ListaCurso::~ListaCurso() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void ListaCurso::agregarCurso(const Curso& curso) {
    Nodo* nuevoNodo = new Nodo(curso);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}

bool ListaCurso::eliminarCurso(const std::string& id) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;

    while (actual != nullptr && actual->curso.getId() != id) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) {
        return false;  
    }

    if (anterior == nullptr) {
        cabeza = actual->siguiente;
    }
    else {
        anterior->siguiente = actual->siguiente;
    }

    delete actual;
    return true;
}

void ListaCurso::mostrarCursos() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->curso.toString() << endl; 
        actual = actual->siguiente;
    }
}

bool ListaCurso::estaVacia() const {
    return cabeza == nullptr;
}
