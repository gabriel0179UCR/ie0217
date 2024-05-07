#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <iostream>

class Estudiante {
    public:
        Estudiante(const std::string& nombre, int edad);
        void mostrarDatos();
    
    private:
        std::string nombre;
        int edad;
};

#endif // ESTUDIANTE_HPP