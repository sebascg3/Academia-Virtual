#include <iostream>
#include "Curso.h"
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

int main() {
	Persona* profe = new Profesor("Sebastian", "123950544", "8982-0101", "sebas@gmail.com", "Licenciado");
	Curso* curso = new Curso("Mate", "20214", 5, 20.000, "Disponible");
	cout << curso->toString();
	return 0;
}