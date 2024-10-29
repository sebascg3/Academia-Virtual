#pragma once
#include "Curso.h"

class NodoCurso {
public:
    Curso curso;
    NodoCurso* siguiente;

    NodoCurso(const Curso& curso);
};
