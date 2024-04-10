#include "PaisPrimerMundo.hpp"
#include "PaisEnDesarrollo.hpp"
#include "Continentes.hpp"
#include <iostream>

struct ContinentesInfo {
    std::string nombre;
    bool pasaAvion;
}

struct PaisesInfo {
    std::string nombre;
    int habitantes;
    bool hayTecnologia5G;
    bool hayAeropuerto;
}

int main() {
    ContinentesInfo ContinentesInfo[5] {
        {"America", true},
        {"Europa", true},
        {"Africa", false},
        {"Oceania", true},
        {"Asia", false}
    };

    PaisesInfo americaPaises[2] = {
        {"Costa Rica", 1000, true, true},
        {"Panama", 2000, true, true},
    };

    PaisesInfo europaPaises[1] = {
        {"Francia", 2300, true, true},
    };

    PaisesInfo africaPaises[8] = {
        {"Uganda", 1500, true, true},
    };
    PaisesInfo oceaniaPaises[8] = {
        {"Uganda", 1500, true, true},
        {"Francia", 2700, true, true},
        {"Belgica", 2000, true, true},
        {"Australia", 1000, true, true},
        {"China", 3000, true, true},
    };

    //PaisEnDesarrollo paisA2("Venezuela", 1000, true, true);
    //PaisEnDesarrollo paisesD[2] = {PaisEnDesarrollo("Costa Rica", 1000, true, true), paisA2};
    for (int i=0; i<)



    PaisPrimerMundo paisB("Panama", 2000, false, false);
    PaisPrimerMundo paisesPM[1] = {paisB};
    Continentes america("America", paisesD, paisesPM, true);

    std::cout << (*(america.paisesEnDesarrollo)).nombre << std::endl;
    std::cout << (*(america.paisesEnDesarrollo+1)).nombre << std::endl;
    return 0;
}