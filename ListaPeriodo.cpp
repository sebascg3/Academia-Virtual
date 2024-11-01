#include "ListaPeriodo.h"
#include <iostream>


ListaPeriodo::ListaPeriodo() : cabeza(nullptr) {}


ListaPeriodo::~ListaPeriodo() {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}


void ListaPeriodo::agregarPeriodo(const Periodo& periodo) {
    Nodo* nuevoNodo = new Nodo(periodo);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}


bool ListaPeriodo::eliminarPeriodo(int numeroPeriodo) {
    Nodo* actual = cabeza;
    Nodo* anterior = nullptr;

    while (actual != nullptr && actual->periodo.getNumeroPeriodo() != numeroPeriodo) {
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


Periodo* ListaPeriodo::buscarPeriodo(int numeroPeriodo) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->periodo.getNumeroPeriodo() == numeroPeriodo) {
            return &actual->periodo;
        }
        actual = actual->siguiente;
    }
    return nullptr;
}


void ListaPeriodo::mostrarPeriodos() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        std::cout << "Periodo " << actual->periodo.getNumeroPeriodo() << ": "
            << actual->periodo.getMesInicio() << " - " << actual->periodo.getMesFin() << std::endl;
        actual = actual->siguiente;
    }
}