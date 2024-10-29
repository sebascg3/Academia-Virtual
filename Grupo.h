#pragma once
#include <iostream>
#include <string>
#include "Horario.h"
#include "Profesor.h"

using namespace std;

class Grupo {
private:
    int numeroGrupo;
    int capacidad;
    int cantidadAlumnos;
    Horario horario;
    Profesor* profesor;
public:

    Grupo();

    Grupo(int, int, int, const Horario&, Profesor*);

    int getNumeroGrupo() const;
    int getCapacidad() const;
    int getCantidadAlumnos() const;
    Horario getHorario() const;
    Profesor* getProfesor() const;

    void setNumeroGrupo(int);
    void setCapacidad(int);
    void setCantidadAlumnos(int);
    void setHorario(const Horario&);
    void setProfesor(Profesor*);

    string mostrarInformacion() const;

    void estaLleno() const;
};
