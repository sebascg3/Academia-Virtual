#include"NodoProfesor.h"

NodoProfe::NodoProfe() {
    prof = NULL;
    sig = NULL;
}
NodoProfe::NodoProfe(Profesor& refProf, NodoProfe* sigN) {
    prof = (Profesor*)&refProf;
    sig = sigN;
}
NodoProfe:: ~NodoProfe() {
    if (prof != NULL) {
        delete prof;
    }
}
Persona* NodoProfe::getProfesor() {
    return prof;
}
NodoProfe* NodoProfe::getSiguiente() {
    return sig;
}
void NodoProfe::setProfesor(Profesor& refProf) {
    if (prof != NULL) {
        delete prof;
        prof = (Profesor*)&refProf;
    }
}
void NodoProfe::setSiguiente(NodoProfe* sigN) {
    sig = sigN;
}