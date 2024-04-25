#include "Libro.hpp"
#include "Biblioteca.hpp"
#include <iostream>


int main() {

    Biblioteca miBiblioteca;

    // Agregando libros
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"Universidad de Costa Rica", "Decanato", 2021});

    // Ordenando libros por anio
    miBiblioteca.ordenarLibrosPorAnio();

    // Mostrando libros
    miBiblioteca.mostrarLibros();

    // Buscando libros por titulo
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }


    // Buscando un libro que no existe
    auto libroInexistente = miBiblioteca.buscarLibroPorTitulo("Libro inexistente");
    if (libroInexistente != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}

