#ifndef CONTINENTES_HPP
#define CONTINENTES_HPP

#include "PaisEnDesarrollo.hpp"
#include "PaisPrimerMundo.hpp"
#include <string>
// Declaracion de clase continentes
class Continentes {
    protected:
        std::string nombre;
        bool pasaAvion;

    public:
        PaisEnDesarrollo *paisesEnDesarrollo;
        PaisPrimerMundo *paisesPrimerMundo;
        Continentes(std::string _nombre, PaisEnDesarrollo *_paisesEnDesarrollo, PaisPrimerMundo *_paisesPrimerMundo, bool _pasaAvion);
};

#endif // CONTINENTES_HPP