#ifndef OPCIONESMENU_HPP
#define OPCIONESMENU_HPP

#include "variables.hpp"
#include <iostream>

using namespace std;


// Declaracion de la funcion que agrega libros a la libreria
void agregarLibro(Libro*& lista);

// Declaracion de al funcion que muestra los libros de la libreria
void mostrarLibros(Libro* lista);

// Declaracion de la funcion que libera espacio de la memoria
void liberarMemoria(Libro*& lista);

#endif // OPCIONESMENU_HPP