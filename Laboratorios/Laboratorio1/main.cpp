#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

#define MAX_CONTACTOS 100

// Declaracion de las opciones de la agenda
enum Opciones {
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main() {

    // Declaracion de la lista de contactos
    Contacto listaContactos[MAX_CONTACTOS];

    int numContactos = 0;
    int opcion;

    do {
        std::cout << "\nMenu: \n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contactos\n";
        std::cout << "3. Buscar Contacto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        // Manejo de opcion seleccionada
        switch (opcion) {
            case AGREGAR:
                agregarContacto(listaContactos, numContactos);
                break;
            case MOSTRAR:
                mostrarContactos(listaContactos, numContactos);
                break;
            case BUSCAR:
                buscarContacto(listaContactos, numContactos);
                break;
            case SALIR:
                std::cout << "Saliendo del programa... \n";
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo... \n";
                break;
        }
    } while (opcion != SALIR);

    return 0;
}