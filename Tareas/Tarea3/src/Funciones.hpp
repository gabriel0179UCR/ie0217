#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Definicion de los encabezados de cada una de las funciones
#include "Contacto.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos);
void eliminarContacto(Contacto contactos[], int &numContactos, int index);
void mostrarContactos(Contacto contactos[], int &numContactos);
void bubbleSort(Contacto contactos[], int numContactos);

#endif // FUNCIONES_HPP