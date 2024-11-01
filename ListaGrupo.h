#pragma once
#include "Grupo.h"
#include <iostream>

class ListaGrupo {
private:
    class Nodo {
    public:
        Grupo grupo;
        Nodo* siguiente;

        Nodo(const Grupo& grupo);
    };

    Nodo* cabeza;

public:
    ListaGrupo();                  
    ~ListaGrupo();                 

    void agregarGrupo(const Grupo& grupo);
    Grupo* buscarGrupo(int numeroGrupo);
    bool eliminarGrupo(int numeroGrupo);
    void mostrarGrupos() const;
    bool estaVacia() const;
};
