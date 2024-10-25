#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Horario {
private:
    string diaSemana;
    int horaInicio;
    int minutoInicio;
    int horaFin;
    int minutoFin;

public:
    Horario();
    Horario(string, int, int, int, int);

    string getDiaSemana() const;
    int getHoraInicio() const;
    int getMinutoInicio() const;
    int getHoraFin() const;
    int getMinutoFin() const;

    void setDiaSemana(const string);
    void setHoraInicio(int);
    void setMinutoInicio(int);
    void setHoraFin(int);
    void setMinutoFin(int);

    string mostrarHorario() const;

    bool hayConflicto(const Horario&) const;
};
