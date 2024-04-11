#include "variables.hpp"
#include "opcionesMenu.hpp"
#include <iostream>

int main() {
    Libro* listaLibros = nullptr;
    int opcion;
    do {
        // Menu de opciones
        cout << endl << "Seleccione su opcion" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch(opcion) {
            case AGREGAR_LIBRO: // Agregando libro
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS: // Mostrando libros
                mostrarLibros(listaLibros);
                break;
            case SALIR: // Saliendo del programa
                cout << "Saliendo del programa..." << endl;
                break;
            default: // Opcion invalida
                cout << "Opcion no permitida." << endl;
                break;
        }
    } while (opcion != SALIR);

    liberarMemoria(listaLibros);

    return 0;
}
