#include <iostream>
#include <vector>

#include "Biblioteca.hpp"

// Funcion que permite agregar libros a la biblioteca
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}
// Funcion que permite mostrar los libros de la biblioteca
void Biblioteca::mostrarLibros() {
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}
// Funcion que permite ordenar los libros por anio
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());
}
// Funcion que permite buscar libros por titulo
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}
// Funcion que devuelve un iterador que apunta al final de la biblioteca
std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end();
}