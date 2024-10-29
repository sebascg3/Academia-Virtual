#include "ListaGrupo.h"

ListaGrupo::ListaGrupo() : cabeza(nullptr) {}

ListaGrupo::~ListaGrupo() {
    NodoGrupo* actual = cabeza;
    while (actual != nullptr) {
        NodoGrupo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void ListaGrupo::agregarGrupo(const Grupo& grupo) {
    NodoGrupo* nuevoNodo = new NodoGrupo(grupo);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}

bool ListaGrupo::eliminarGrupo(int numeroGrupo) {
    NodoGrupo* actual = cabeza;
    NodoGrupo* anterior = nullptr;

    while (actual != nullptr && actual->grupo.getNumeroGrupo() != numeroGrupo) {
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

void ListaGrupo::mostrarGrupos() const {
    NodoGrupo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->grupo.mostrarInformacion() << endl;
        actual = actual->siguiente;
    }
}

bool ListaGrupo::estaVacia() const {
    return cabeza == nullptr;
}
