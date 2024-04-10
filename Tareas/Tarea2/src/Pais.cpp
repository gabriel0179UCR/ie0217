#include "Pais.hpp"
#include <iostream>

#include <string>
#include <time.h>

// Declaracion de la clase Pais
Pais::Pais(std::string _nombre, int _habitantes, bool _hayTecnologia5G, bool _hayAeropuerto) :
    nombre(_nombre), habitantes(_habitantes), hayTecnologia5G(_hayTecnologia5G), hayAeropuerto(_hayAeropuerto) {}



// Obtener PIB
long Pais::obtenerPIB() {
    srand(time(0));
    return rand()%1000000;
}

// Definicion del metodo compararPaises
void Pais::compararPaises(Pais &paisB) {
    bool resultado = comparar(paisB.habitantes);
    if (resultado) {
        std::cout << "Paises iguales" << std::endl;
    } else {
        std::cout << "Paises diferentes" << std::endl;
    };
}


// Definicion del metodo comparar
bool Pais::comparar(int ident) {
    if (ident == habitantes) {
        return true;
    };
    return false;
}