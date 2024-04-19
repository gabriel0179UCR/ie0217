#include "Contacto.hpp"

Contacto agregarContacto(Contacto contactos[], int &numContactos) {

    // Consulta de datos del nuevo contacto
    std::string nombre;
    int telefono;
    std::cout << "\nIngrese el nombre del contacto: ";
    std::cin.ignore();
    getline(std::cin, nombre);
    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> telefono;

    // Se agrega el nuevo contacto a la lista de contactos que se tiene
    int index = numContactos+1;
    contactos[index].nombre = nombre;
    contactos[index].telefono = telefono;

    numContactos++;

    Contacto contacto;
    contacto.nombre = nombre;
    contacto.telefono = telefono;

    return contacto;
}

void eliminarContacto(Contacto contactos[], int &numContactos) {
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

void bubbleSort(Contacto contactos[], int numContactos) {
    // loop to access each array element
    for (int step = 0; step < numContactos; ++step) {

        // check if swapping occurs
        int swapped = 0;

        // loop to compare array elements
        for (int i = 0; i < (numContactos-step-1); ++i) {

            // compare two adjacent elements
            if (contactos[i].nombre < contactos[i + 1].nombre) {

                // swapping elements if elements
                // are not in the intended order
                std::string tempNombre = contactos[i].nombre;
                contactos[i].nombre = contactos[i + 1].nombre;
                contactos[i + 1].nombre = tempNombre;

                int tempTelefono = contactos[i].telefono;
                contactos[i].telefono = contactos[i + 1].telefono;
                contactos[i + 1].telefono = tempTelefono;

                swapped = 1;
            }
        }

        // no swapping means the array is already sorted
        // so no need of further comparison
        if (swapped == 0)
            break;
    }
}

void mostrarContactos(Contacto contactos[], int &numContactos) {
    bubbleSort(contactos, numContactos);
    for (int i = 0; i < numContactos; ++i) {
        std::cout << "Nombre: " << contactos[i].nombre << std::endl;
        std::cout << "Telefono: " << contactos[i].telefono << std::endl << std::endl;
    }
}

