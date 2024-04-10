#include "PaisPrimerMundo.hpp"
#include <iostream>
// Definicion de la clase PaisPrimerMundo
PaisPrimerMundo::PaisPrimerMundo(std::string _nombre, int _habitantes, bool _hayTecnologia5G, bool _hayAeropuerto) :
    Pais(_nombre, _habitantes, _hayTecnologia5G, _hayAeropuerto) {
        porcentajeDesempleo = desempleo();
}


double PaisPrimerMundo::desempleo() {
    srand(time(0));
    return 100*(rand()%habitantes)/habitantes;
}