#pragma once
#include "Estudiante.h"

class NodoEst {
private:
    Estudiante* est;
    NodoEst* sig;//Enlace al proximo nodo
public:
    NodoEst();
    NodoEst(Estudiante&, NodoEst*);//Recibe a la per y a quie ve
    virtual ~NodoEst();
    Persona* getEstudiante();
    NodoEst* getSiguiente();
    void setEstudiante(Estudiante&);//Caambiar obj del nodo
    void setSiguiente(NodoEst*);//Cambiar a lo que ve el Nodo
};