#pragma once
#include "Periodo.h"

using namespace std;

class ListaPeriodo {
private:
    class Nodo {
    public:
        Periodo periodo;
        Nodo* siguiente;

        Nodo(const Periodo& periodo) : periodo(periodo), siguiente(nullptr) {}
    };

    Nodo* cabeza;

public:
    ListaPeriodo();
    ~ListaPeriodo();

    void agregarPeriodo(const Periodo& periodo);
    bool eliminarPeriodo(int numeroPeriodo);
    Periodo* buscarPeriodo(int numeroPeriodo);
    void mostrarPeriodos() const;
};
