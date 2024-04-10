#ifndef PAISENDESARROLLO_HPP
#define PAISENDESARROLLO_HPP

#include "Pais.hpp"

class PaisEnDesarrollo : public Pais {
    public:
        PaisEnDesarrollo(std::string _nombre, int _habitantes, bool _hayTecnologia5G, bool _hayAeropuerto);
};


#endif // PAISENDESARROLLO_HPP