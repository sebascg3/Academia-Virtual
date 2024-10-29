#include "ListaCurso.h"

ListaCurso::ListaCurso() : cabeza(nullptr) {}

ListaCurso::~ListaCurso() {
    NodoCurso* actual = cabeza;
    while (actual != nullptr) {
        NodoCurso* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void ListaCurso::agregarCurso(const Curso& curso) {
    NodoCurso* nuevoNodo = new NodoCurso(curso);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}

bool ListaCurso::eliminarCurso(const string& id) {
    NodoCurso* actual = cabeza;
    NodoCurso* anterior = nullptr;

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
    NodoCurso* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->curso.toString() << endl;
        actual = actual->siguiente;
    }
}


bool ListaCurso::estaVacia() const {
    return cabeza == nullptr;
}