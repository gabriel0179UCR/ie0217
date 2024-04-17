#include "Contacto.hpp"

void agregarContacto(Contacto contactos[], int &numContactos) {

    // Consulta de datos del nuevo contacto
    std::string nombre;
    int telefono;
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nombre;
    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> telefono;

    // Se agrega el nuevo contacto a la lista de contactos que se tiene
    contactos[numContactos+1].nombre = nombre;
    contactos[numContactos+1].telefono = telefono;

    numContactos++;
}