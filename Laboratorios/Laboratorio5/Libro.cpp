#include "Libro.hpp"

// Definicion del contructor de la clase Libro
Libro::Libro(std::string t, std::string a, int anio) : 
    titulo(t), autor(a), anioPublicacion(anio) {}

// Definicion de la funcion operator<()
// La comparacion entre libros se basa en
// anios de publicacion
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}