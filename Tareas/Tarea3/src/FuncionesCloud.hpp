#ifndef FUNCIONESCLOUD_HPP
#define FUNCIONESCLOUD_HPP

#include "Contacto.hpp"
#include <string>
using namespace std;
void agregarContactoCloud(ContactoCloud*& cloud, int valorHash, string nombre, int telefono);
void mostrarContactosCloud(ContactoCloud* cloud);
void eliminarContactoCloud(ContactoCloud*& cloud, string nombre);
#endif // FUNCIONESCLOUD_HPP