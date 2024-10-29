#include"NodoEstudiante.h"

NodoEst::NodoEst() {
    est = NULL;
    sig = NULL;
}
NodoEst::NodoEst(Estudiante& refEs, NodoEst* sigN) {
    est = (Estudiante*)&refEs;
    sig = sigN;
}
NodoEst:: ~NodoEst() {
    if (est != NULL) {
        delete est;
    }
}
Persona* NodoEst::getEstudiante() {
    return est;
}
NodoEst* NodoEst::getSiguiente() {
    return sig;
}
void NodoEst::setEstudiante(Estudiante& refEst) {
    if (est != NULL) {
        delete est;
        est = (Estudiante*)&refEst;
    }
}
void NodoEst::setSiguiente(NodoEst* sigN) {
    sig = sigN;
}