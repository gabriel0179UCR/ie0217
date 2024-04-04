#include "EmpleadoAsalariado.hpp"


// Definicion de la clase EmpleadoAsalariado
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {} // Atributos y metodos de la clase Empleado

// Redefinicion de la funcion calcularPago de la clase EmpeladoAsalariado
double EmpleadoAsalariado::calcularPago() const {
    return salario;
}