#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Definicion de los encabezados de cada una de las funciones
#include "Contacto.hpp"
#include <iostream>
using namespace std;

Contacto agregarContacto(Contacto listaContactos[], int &numContactos);
void eliminarContacto(Contacto contactos[], int &numContactos, string nombre);
void mostrarContactos(Contacto contactos[], int &numContactos);
void bubbleSort(Contacto contactos[], int numContactos);

#endif // FUNCIONES_HPP