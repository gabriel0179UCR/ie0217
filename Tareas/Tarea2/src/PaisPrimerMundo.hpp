#ifndef PAISPRIMERMUNDO_HPP
#define PAISPRIMERMUNDO_HPP

#include "Pais.hpp"
// Declaracion de la clase PaisPrimerMundo
class PaisPrimerMundo : public Pais {
    public:
        PaisPrimerMundo(std::string _nombre, int _habitantes, bool _hayTecnologia5G, bool _hayAeropuerto);
        double porcentajeDesempleo;
    private:
        double desempleo();
};

#endif // PAISPRIMERMUNDO_HPP