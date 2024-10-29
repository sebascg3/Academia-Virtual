#include <iostream>
#include "Grupo.h"
#include "Horario.h"
#include "Profesor.h"

int main() {
    Horario horario("Lunes", 10, 0, 12, 0);

    Profesor profesor("Dr. Juan Perez", "1234456", "89820101", "sebas@gmail.com", "Licenciado");

    Grupo grupo(101, 30, 25, horario, &profesor);

    cout << grupo.mostrarInformacion() << endl;

    grupo.estaLleno();

    return 0;
}
