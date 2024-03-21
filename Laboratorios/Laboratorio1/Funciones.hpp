#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Definicion de los encabezados de cada una de las funciones
#include "Contacto.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos);
void mostrarContactos(const Contacto listaContactos[], int numContactos);
void buscarContacto(const Contacto listaContactos[], int numContactos);

#endif // FUNCIONES_HPP