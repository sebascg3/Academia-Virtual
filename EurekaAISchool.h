#pragma once
#include "ListaCurso.h"
#include "ListaEstudiante.h"
#include "ListaGrupo.h"
#include "ListaPeriodo.h"
#include "ListaProfesor.h"
#include <string>

using namespace std;

class EurekaAISchool {
private:
    ListaCurso* lisCurso;
    ListaEstudiante* lisEstudiante;
    ListaGrupo* lisGrupo;
    ListaPeriodo* lisPeriodo;
    ListaProfesor* lisProfesor;

public:
    EurekaAISchool();
    EurekaAISchool(ListaCurso&, ListaEstudiante&, ListaGrupo&, ListaPeriodo&, ListaProfesor&);
    ~EurekaAISchool();

    // Métodos Get
    ListaCurso* getCurso();
    ListaEstudiante* getEstudiante();
    ListaGrupo* getGrupo();
    ListaPeriodo* getPeriodo();
    ListaProfesor* getProfesor();

    // Métodos Set
    bool setCurso(Curso&);
    bool setEstudiante(Estudiante&);
    bool setGrupo(Grupo&);
    bool setPeriodo(Periodo&);
    bool setProfesor(Profesor&);

    // Buscar

    // Gestión de Cursos
    void agregarCurso(Curso* nuevoCurso);
    Curso* buscarCursoPorID(const string& id);
    void eliminarCurso(const string& id);
    void mostrarCursosDisponibles() const;

    // Gestión de Grupos
    void crearGrupo(Curso* curso, Grupo* nuevoGrupo);
    Grupo* buscarGrupo(Curso* curso, int numeroGrupo);
    void eliminarGrupo(Curso* curso, int numeroGrupo);
    void mostrarGruposDeCurso(const Curso* curso) const;

    // Gestión de Estudiantes
    void registrarEstudiante(Estudiante* nuevoEstudiante);
    Estudiante* buscarEstudiantePorID(const string& id);
    void eliminarEstudiante(const string& id);
    void mostrarEstudiantes() const;

    // Gestión de Profesores
    void registrarProfesor(Profesor* nuevoProfesor);
    Profesor* buscarProfesorPorID(const string& id);
    void eliminarProfesor(const string& id);
    void mostrarProfesores() const;
    void asignarProfesorAGrupo(Profesor* profesor, Grupo* grupo);

    // Gestión de Periodos
    void agregarPeriodo(Periodo* nuevoPeriodo);
    Periodo* buscarPeriodo(int numeroPeriodo);
    void mostrarPeriodos() const;

    // Gestión de Horarios
    Horario* crearHorario(const string& diaSemana, int horaInicio, int minutoInicio, int horaFin, int minutoFin);
    void mostrarHorarioGrupo(const Grupo* grupo) const;

    // Informes
    void informeProfesores() const;
    void informeEstudiantes() const;
    void informeCursosMatriculadosPorEstudiante(const string& estudianteID) const;
    void informeProfesorEspecifico(const string& profesorID) const;
    void informePeriodosHabilitados() const;
    void informeGrupoEspecifico(const string& cursoID, int numeroGrupo) const;
};
