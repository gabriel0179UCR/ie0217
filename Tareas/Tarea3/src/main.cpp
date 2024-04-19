#include <iostream>
#include "Contacto.hpp"
#include "HashTable.hpp"
#include "Funciones.hpp"
#include "FuncionesCloud.hpp"
#include <string>
using namespace std;

#define MAX_CONTACTOS 10

enum Opciones {
    AGREGARCONTACTO = 1,
    ELIMINARCONTACTO,
    IMPRIMIRCLOUD,
    MOSTRARCONTACTOS,
    SALIR
};

int main() {

    int numContactos = -1;
    Contacto* contactos = (Contacto*)malloc(MAX_CONTACTOS*sizeof(Contacto)); 
    HashTable HT;
    ContactoCloud* cloud = nullptr;
    Contacto cont;
    int valorHash;
    int opcionEliminar;
    string nombre;

    int opcion = 1;
    bool exit = false;
    while(!exit){
        cout << endl << "///// Contactos /////" << endl;
    
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Eliminar un contacto" << endl;
        cout << "3. Imprimir Hash-Table y Listas Enlazadas" << endl;
        cout << "4. Mostrar todos los contactos" << endl;
        cout << "5. Salir del programa" << endl;
        
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case AGREGARCONTACTO:
                cout << endl;
                cont = agregarContacto(contactos, numContactos);
                valorHash = HT.ingresarContacto(cont.telefono, cont.nombre);
                agregarContactoCloud(cloud, valorHash, cont.nombre, cont.telefono);
                break;
            case ELIMINARCONTACTO:
                cout << endl;
                cout << "Ingrese la memoria a eliminar:" << endl;
                cout << "1. Eliminar en la memoria del celular" << endl;
                cout << "2. Eliminar en el almacenamiento - cloud" << endl;
                cout << "Ingrese su opcion: ";
                cin >> opcionEliminar;
                
                cout << "Ingrese el nombre del contacto a eliminar: ";
                cin >> nombre;

                if (opcionEliminar == 1) {
                    eliminarContacto(contactos, numContactos, nombre);
                } else if (opcionEliminar == 2) {
                    HT.eliminarContacto(contactos, numContactos, nombre);
                    eliminarContactoCloud(cloud, nombre);
                } else {
                    cout << endl << "Opcion incorrecta" << endl;
                };
                break;
            case IMPRIMIRCLOUD:
                cout << endl;
                HT.imprimirTabla();
                mostrarContactosCloud(cloud);
                break;
            case MOSTRARCONTACTOS:
                cout << endl;
                mostrarContactos(contactos,numContactos);
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
    free(contactos);

    return 0;
}