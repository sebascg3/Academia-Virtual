#pragma once
#include "Grupo.h"
#include <iostream>

class ListaGrupo {
private:
    class Nodo {
    public:
        Grupo grupo;
        Nodo* siguiente;

        Nodo(const Grupo& grupo);  // Constructor
    };

    Nodo* cabeza;

public:
    ListaGrupo();                  // Constructor
    ~ListaGrupo();                 // Destructor

    void agregarGrupo(const Grupo& grupo);
    bool eliminarGrupo(int numeroGrupo);
    void mostrarGrupos() const;
    bool estaVacia() const;
};
