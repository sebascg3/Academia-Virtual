#pragma once
#include "Grupo.h"
class NodoGrupo{
public:
    Grupo grupo;
    NodoGrupo* siguiente;

    NodoGrupo(const Grupo& grupo);
};

