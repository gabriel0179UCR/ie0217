#include "EmpleadoPorHoras.hpp"

// Definicion de la clase EmpleadoPorHoras
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {} // Atributos y metodos de la clase Empleado

// Redefinicion de la funcion calcularPago de la clase EmpeladoPorHoras
double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas;
}