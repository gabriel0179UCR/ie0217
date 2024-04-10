#include "PaisPrimerMundo.hpp"
#include "PaisEnDesarrollo.hpp"
#include <iostream>

// Declaracion de las opciones del menu
enum Opciones {
    IMPRIMIR = 1,
    COMPARAR,
    AGREGAR,
    ELIMINAR,
    SALIR
};

int main() {
    int opcion;
    bool exit_game = false;
    //! - Loop del menu para acceder a todas las opciones
    while(!exit_game){
        std::cout << "///// Menu /////" << std::endl;
    
        std::cout << "1. Imprimir informacion de todos los paises" << std::endl;
        std::cout << "2. Comparar paises" << std::endl;
        std::cout << "3. Apregar nuevo pais" << std::endl;
        std::cout << "4. Eliminar pais" << std::endl;
        std::cout << "5. Salir del programa" << std::endl;
        
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        // Se utiliza un switch para determinar la opcion seleccionada por el usuario
        switch (opcion) {
            case IMPRIMIR:
                break;
            case COMPARAR:
                break;
            case AGREGAR:
                break;
            case ELIMINAR:
                break;
            case EXIT:
                break;
        };
    
    };
    return 0;

    return 0;
}