#include "FuncionesCloud.hpp"


void agregarContactoCloud(ContactoCloud*& cloud, int valorHash, string nombre, int telefono) {
    ContactoCloud* contactoNuevo = new ContactoCloud;

    contactoNuevo->hashTableKey = valorHash;
    contactoNuevo->nombre = nombre;
    contactoNuevo->telefono = telefono;

    contactoNuevo->siguiente = cloud;

    cloud = contactoNuevo;
}


void mostrarContactosCloud(ContactoCloud* cloud) {
    if (cloud == nullptr) {
        cout << "No hay contactos guardados en la nube." << endl;
        return;
    }

    cout << "Lista de contactos en la nube: " << endl;
    while (cloud != nullptr) {
        cout << "Nombre: " << cloud->nombre;
        cout << " Telefono: " << cloud->telefono << endl;
        cloud = cloud->siguiente;
    }
}

void eliminarContactoCloud(ContactoCloud*& cloud, string nombre) {
    ContactoCloud* actualCloud = cloud;
    ContactoCloud* nextCloud = cloud->siguiente;
    ContactoCloud* newCloud = nullptr;

    while(nextCloud != nullptr) {
        if (actualCloud->nombre == nombre){
            if (nextCloud == nullptr) {
                break;
            }
            agregarContactoCloud(newCloud, nextCloud->hashTableKey, nextCloud->nombre, nextCloud->telefono);
        } else {
            agregarContactoCloud(newCloud, actualCloud->hashTableKey, actualCloud->nombre, actualCloud->telefono);
        }
        cout << "TEST: " << newCloud->nombre << endl;
        actualCloud = actualCloud->siguiente;
        nextCloud = nextCloud->siguiente;
    }
    cloud = newCloud;
}