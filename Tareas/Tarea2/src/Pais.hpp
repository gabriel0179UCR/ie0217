#ifndef PAIS_HPP
#define PAIS_HPP

#include <string>
// Declaracion de clase continentes
class Pais {
    protected:
        int identificador;

    public:
        Pais(std::string _nombre, int _habitantes, bool _hayTecnologia5G, bool _hayAeropuerto);
        virtual ~Pais(){} // Destructor

        std::string nombre;
        int habitantes;
        bool hayTecnologia5G;
        bool hayAeropuerto;

        long obtenerPIB();

        void compararPaises(Pais &paisB);
    
    private:
        bool comparar(int ident);
};

#endif // PAIS_HPP