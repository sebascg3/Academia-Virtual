#pragma once
#include "NodoGrupo.h"
#include <iostream>

class ListaGrupo {
private:
    NodoGrupo* cabeza;

public:
    ListaGrupo();

    ~ListaGrupo();

    void agregarGrupo(const Grupo& grupo);
    bool eliminarGrupo(int numeroGrupo);
    void mostrarGrupos() const;
    bool estaVacia() const;
};
