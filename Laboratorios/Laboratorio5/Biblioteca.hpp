#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include "Libro.hpp"

// Declaracion de la clase Biblioteca
class Biblioteca {
private:
    // Vector de libros de la clase Libro
    std::vector<Libro> libros;

public:
    // Declaracion de funcion que 
    // permite agregar libros a la biblioteca
    void agregarLibro(const Libro& libro);

    // Declaracion de funcion que 
    // permite mostrar los libros de la biblioteca
    void mostrarLibros();

    // Declaracion de funcion que 
    // permite ordenar los libros por anio
    void ordenarLibrosPorAnio();

    // Declaracion de funcion que 
    // permite buscar libros por titulo
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);

    // Declaracion de funcion que 
    //devuelve un iterador que apunta 
    // al final de la biblioteca
    std::vector<Libro>::iterator end();
};

#endif // BIBLIOTECA_HPP