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

void eliminarContacto(Contacto contactos[], int &numContactos, int index) {
    std::string nombre;
    std::cout << "Ingrese el nombre del contacto a eliminar: ";
    std::cin >> nombre;
    for (int j = 0; j < numContactos; j++) {
        if (contactos[j].nombre == nombre) {
            for (int i = j; i < numContactos; i++) {
                contactos[i].nombre = contactos[i + 1].nombre;
                contactos[i].telefono = contactos[i + 1].telefono;
            };
            numContactos--;
            break;
        };
    };
}