#include <iostream>
#include "Curso.h"
#include "Estudiante.h"
#include "Profesor.h"

using namespace std;

int main() {
	Persona* estudiante = new Estudiante("Sebastian", "123950544", "8982-0101", "sebas@gmail.com", "Licenciado");
	Curso cur;
	cout << estudiante->toString();
	return 0;
}