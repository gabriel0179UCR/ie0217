#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

// Declaracion de la clase EmpleadoAsalariado
// Herencia publica: Lo publico, privado y restringido se mantiene
class EmpleadoAsalariado : public Empleado {
    public:
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);

        // Redeclaracion del metodo calcularPago de la clase Empleado
        double calcularPago() const override;
};

#endif // EMPLEADOASALARIADO_HPP