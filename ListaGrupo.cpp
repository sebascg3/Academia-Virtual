#include "ListaGrupo.h"

ListaGrupo::Nodo::Nodo(const Grupo& grupo) : grupo(grupo), siguiente(nullptr) {}

ListaGrupo::ListaGrupo() : cabeza(nullptr) {}

ListaGrupo::~ListaGrupo() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

void ListaGrupo::agregarGrupo(const Grupo& grupo) {
    Nodo* nuevoNodo = new Nodo(grupo);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}

Grupo* ListaGrupo::buscarGrupo(int numeroGrupo) {
    Nodo* actual = cabeza;
    while (actual) {
        if (actual->grupo.getNumeroGrupo() == numeroGrupo) {
            return &actual->grupo;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}

bool ListaGrupo::eliminarGrupo(int numeroGrupo) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;

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
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->grupo.mostrarInformacion() << endl;  
        actual = actual->siguiente;
    }
}


bool ListaGrupo::estaVacia() const {
    return cabeza == nullptr;
}
