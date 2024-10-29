#pragma once
#include "Profesor.h"

class NodoProfe {
private:
    Profesor* prof;
    NodoProfe* sig;//Enlace al proximo nodo
public:
    NodoProfe();
    NodoProfe(Profesor&, NodoProfe*);//Recibe a la per y a quie ve
    virtual ~NodoProfe();
    Persona* getProfesor();
    NodoProfe* getSiguiente();
    void setProfesor(Profesor&);//Caambiar obj del nodo
    void setSiguiente(NodoProfe*);//Cambiar a lo que ve el Nodo
};