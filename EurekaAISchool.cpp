#include "EurekaAISchool.h"
#include <iostream>

// Constructor por defecto
EurekaAISchool::EurekaAISchool()
    : lisCurso(new ListaCurso), lisEstudiante(new ListaEstudiante), lisGrupo(new ListaGrupo),
    lisPeriodo(new ListaPeriodo), lisProfesor(new ListaProfesor) {}

// Constructor con referencias a listas
EurekaAISchool::EurekaAISchool(ListaCurso& cursos, ListaEstudiante& estudiantes,
    ListaGrupo& grupos, ListaPeriodo& periodos, ListaProfesor& profesores)
    : lisCurso(&cursos), lisEstudiante(&estudiantes), lisGrupo(&grupos),
    lisPeriodo(&periodos), lisProfesor(&profesores) {}

// Destructor
EurekaAISchool::~EurekaAISchool() {
    delete lisCurso;
    delete lisEstudiante;
    delete lisGrupo;
    delete lisPeriodo;
    delete lisProfesor;
}

// Métodos Get
ListaCurso* EurekaAISchool::getCurso() { return lisCurso; }
ListaEstudiante* EurekaAISchool::getEstudiante() { return lisEstudiante; }
ListaGrupo* EurekaAISchool::getGrupo() { return lisGrupo; }
ListaPeriodo* EurekaAISchool::getPeriodo() { return lisPeriodo; }
ListaProfesor* EurekaAISchool::getProfesor() { return lisProfesor; }

// Métodos Set
bool EurekaAISchool::setCurso(Curso& curso) { lisCurso->agregarCurso(curso); return true; }
bool EurekaAISchool::setEstudiante(Estudiante& estudiante) { lisEstudiante->agregarEstudiante(estudiante); return true; }
bool EurekaAISchool::setGrupo(Grupo& grupo) { lisGrupo->agregarGrupo(grupo); return true; }
bool EurekaAISchool::setPeriodo(Periodo& periodo) { lisPeriodo->agregarPeriodo(periodo); return true; }
bool EurekaAISchool::setProfesor(Profesor& profesor) { lisProfesor->agregarProfesor(profesor); return true; }

// Gestión de Cursos
void EurekaAISchool::agregarCurso(Curso* nuevoCurso) { lisCurso->agregarCurso(*nuevoCurso); }
Curso* EurekaAISchool::buscarCursoPorID(const string& id) { return lisCurso->buscarCurso(id); }
void EurekaAISchool::eliminarCurso(const string& id) { lisCurso->eliminarCurso(id); }
void EurekaAISchool::mostrarCursosDisponibles() const { lisCurso->mostrarCursos(); }

// Gestión de Grupos
void EurekaAISchool::crearGrupo(Curso* curso, Grupo* nuevoGrupo) {
    if (nuevoGrupo) {
        lisGrupo->agregarGrupo(*nuevoGrupo);
    }
}
Grupo* EurekaAISchool::buscarGrupo(Curso* curso, int numeroGrupo) { return lisGrupo->buscarGrupo(numeroGrupo); }
void EurekaAISchool::eliminarGrupo(Curso* curso, int numeroGrupo) { lisGrupo->eliminarGrupo(numeroGrupo); }
void EurekaAISchool::mostrarGruposDeCurso(const Curso* curso) const { lisGrupo->mostrarGrupos(); }

// Gestión de Estudiantes
void EurekaAISchool::registrarEstudiante(Estudiante* nuevoEstudiante) { lisEstudiante->agregarEstudiante(*nuevoEstudiante); }
Estudiante* EurekaAISchool::buscarEstudiantePorID(const string& id) { return lisEstudiante->buscarEstudiante(id); }
void EurekaAISchool::eliminarEstudiante(const string& id) { lisEstudiante->eliminarEstudiante(id); }
void EurekaAISchool::mostrarEstudiantes() const { lisEstudiante->mostrarEstudiantes(); }

// Gestión de Profesores
void EurekaAISchool::registrarProfesor(Profesor* nuevoProfesor) { lisProfesor->agregarProfesor(*nuevoProfesor); }
Profesor* EurekaAISchool::buscarProfesorPorID(const string& id) { return lisProfesor->buscarProfesor(id); }
void EurekaAISchool::eliminarProfesor(const string& id) { lisProfesor->eliminarProfesor(id); }
void EurekaAISchool::mostrarProfesores() const { lisProfesor->mostrarProfesores(); }
void EurekaAISchool::asignarProfesorAGrupo(Profesor* profesor, Grupo* grupo) { grupo->setProfesor(profesor); }

// Gestión de Periodos
void EurekaAISchool::agregarPeriodo(Periodo* nuevoPeriodo) { lisPeriodo->agregarPeriodo(*nuevoPeriodo); }
Periodo* EurekaAISchool::buscarPeriodo(int numeroPeriodo) { return lisPeriodo->buscarPeriodo(numeroPeriodo); }
void EurekaAISchool::mostrarPeriodos() const { lisPeriodo->mostrarPeriodos(); }

// Gestión de Horarios
Horario* EurekaAISchool::crearHorario(const string& diaSemana, int horaInicio, int minutoInicio, int horaFin, int minutoFin) {
    return new Horario(diaSemana, horaInicio, minutoInicio, horaFin, minutoFin);
}
// Gestión de Horarios
void EurekaAISchool::mostrarHorarioGrupo(const Grupo* grupo) const {
    if (grupo) {
        grupo->getHorario().mostrarHorario();
    }
    else {
        cout << "Grupo no encontrado." << endl;
    }
}

// Informes
void EurekaAISchool::informeProfesores() const { lisProfesor->mostrarProfesores(); }
void EurekaAISchool::informeEstudiantes() const { lisEstudiante->mostrarEstudiantes(); }
void EurekaAISchool::informeCursosMatriculadosPorEstudiante(const string& estudianteID) const {
    Estudiante* estudiante = buscarEstudiantePorID(estudianteID);
    if (estudiante) estudiante->mostrarCursos();
}
void EurekaAISchool::informeProfesorEspecifico(const string& profesorID) const {
    Profesor* profesor = buscarProfesorPorID(profesorID);
    if (profesor) cout << profesor->toString();
}
void EurekaAISchool::informePeriodosHabilitados() const { mostrarPeriodos(); }
void EurekaAISchool::informeGrupoEspecifico(const string& cursoID, int numeroGrupo) const {
    Curso* curso = buscarCursoPorID(cursoID);
    if (curso) {
        Grupo* grupo = buscarGrupo(curso, numeroGrupo);
        if (grupo) grupo->mostrarInformacion();
    }
}
