#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

class Biblioteca {
    public:
        void agregarLibro(
            const std::string& titulo,
            const std::string& autor
        );
        void mostarCatalogo();
    
    private:
        std::vector<Libro> catalogo;
};

#endif // BIBLIOTECA_HPP