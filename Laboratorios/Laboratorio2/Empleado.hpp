#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

// Declaracion de la clase Empleado
class Empleado {
    protected:
        // Atributos
        std::string nombre;
        int edad;
        double salario;
    
    public:
        // Metodos
        Empleado(std::string _string, int _edad, double _salario);
        virtual ~Empleado(){} // Destructor
        virtual double calcularPago() const = 0; // Metodo virtual puro, si o si se debe sobrescribir
        virtual void mostrarDetalles() const;
};



#endif // EMPLEADO_HPP