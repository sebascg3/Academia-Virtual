#include "Horario.h"

Horario::Horario() : diaSemana(""), horaInicio(0), minutoInicio(0), horaFin(0), minutoFin(0) {}

Horario::Horario(string _diaSemana, int _horaInicio, int _minutoInicio, int _horaFin, int _minutoFin)
    : diaSemana(_diaSemana), horaInicio(_horaInicio), minutoInicio(_minutoInicio), horaFin(_horaFin), minutoFin(_minutoFin) {}

string Horario::getDiaSemana() const {
    return diaSemana;
}

int Horario::getHoraInicio() const {
    return horaInicio;
}

int Horario::getMinutoInicio() const {
    return minutoInicio;
}

int Horario::getHoraFin() const {
    return horaFin;
}

int Horario::getMinutoFin() const {
    return minutoFin;
}

void Horario::setDiaSemana(const string _diaSemana) {
    diaSemana = _diaSemana;
}

void Horario::setHoraInicio(int _horaInicio) {
    horaInicio = _horaInicio;
}

void Horario::setMinutoInicio(int _minutoInicio) {
    minutoInicio = _minutoInicio;
}

void Horario::setHoraFin(int _horaFin) {
    horaFin = _horaFin;
}

void Horario::setMinutoFin(int _minutoFin) {
    minutoFin = _minutoFin;
}

string Horario::mostrarHorario() const {
    stringstream ss;
    ss << diaSemana << ": " << horaInicio << ":" << (minutoInicio < 10 ? "0" : "") << minutoInicio
        << " - " << horaFin << ":" << (minutoFin < 10 ? "0" : "") << minutoFin;
    return ss.str();
}


bool Horario::hayConflicto(const Horario& otro) const {

    if (diaSemana != otro.diaSemana) {
        return false;
    }

    int inicioTotalMinutos = horaInicio * 60 + minutoInicio;
    int finTotalMinutos = horaFin * 60 + minutoFin;

    int otroInicioMinutos = otro.horaInicio * 60 + otro.minutoInicio;
    int otroFinMinutos = otro.horaFin * 60 + otro.minutoFin;

    return (inicioTotalMinutos < otroFinMinutos && finTotalMinutos > otroInicioMinutos);
}
