#include "ValidadorEmail.hpp"
#include <iostream>
#include <string>
using namespace std;

enum Opciones {
    INGRESAR = 1,
    SALIR = 2,
};

int main() {
    ValidadorEmail valEmail;
    bool resultado;
    int opcion = 0;
    string email;
    bool exit = false;
    // Menu de opciones
    while(!exit){
        cout << endl << "///// Validacion de correo /////" << endl;
        cout << "1. Revisar correo" << endl;
        cout << "2. Salir del programa" << endl;
        
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion) {
            case INGRESAR:
                cout << endl;
                cout << endl << "Formato de correo nombre@dominio.extension" << endl;
                cout << "Ingresar correo: " << endl;
                cin >> email;
                resultado = valEmail.validarCorreo(email);
                if (resultado) {
                    cout << "Correo aprobado!!" << endl;
                } else {
                    cout << "Correo incorrecto" << endl;
                }
                break;
            case SALIR:
                cout << endl;
                cout << "Saliendo del programa" << endl;
                exit = true;
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                break;
        };
    
    };
    
    return 0;
}