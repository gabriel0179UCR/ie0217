#ifndef VARIABLES_HPP
#define VARIABLES_HPP

#include <string>
using namespace std;

// Estructura de Libro
struct Libro {
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // Contiene la direccion de memoria de otro Libro. Se detiene con un nullptr
};

// Enum opciones
enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS,
    SALIR,
    OPCIONES_MAX
};

#endif // VARIABLES_HPP