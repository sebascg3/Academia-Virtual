#include <iostream>
#include "Grupo.h"
#include "Horario.h"
#include "Profesor.h"

int main() {
    // Crear un horario
    Horario horario("Lunes", 10, 0, 12, 0);  // Lunes de 10:00 a 12:00

    // Crear un profesor (se asume que Profesor tiene un constructor que recibe nombre)
    Profesor profesor("Dr. Juan Perez", "1234456", "89820101", "sebas@gmail.com", "Licenciado");

    // Crear un grupo
    Grupo grupo(101, 30, 25, horario, &profesor);

    // Mostrar información del grupo
    cout << grupo.mostrarInformacion() << endl;

    // Verificar si el grupo está lleno
    grupo.estaLleno();

    return 0;
}
