#include <iostream>
#include "Contacto.hpp"
#include "HashTable.hpp"
#include "Funciones.hpp"
#include <string>
using namespace std;

void HashTable::ingresarContacto(int key, string value) {
    int valorHash = funcionHash(key);
    list<pair<int, string>>& filas = tabla[valorHash];
    list<pair<int, string>>::iterator filasPtr = begin(filas);
    bool keyExists = false;
    for (; filasPtr != end(filas); ++filasPtr) {
        if (filasPtr->first == key) {
            keyExists = true;
            filasPtr->second = value;
            cout << "[WARNING] Key Exist. Value replaced." << endl;
            break;
        }
    }

    if (!keyExists) {
        filas.emplace_back(key, value);
    }

    return;
}
void HashTable::eliminarContacto(int key) {
    int valorHash = funcionHash(key);
    list<pair<int, string>>& filas = tabla[valorHash];
    list<pair<int, string>>::iterator filasPtr = begin(filas);
    bool keyExists = false;
    for (; filasPtr != end(filas); ++filasPtr) {
        if (filasPtr->first == key) {
            keyExists = true;
            filasPtr = filas.erase(filasPtr);
            cout << "[INFO] Pair removed." << endl;
            break;
        }
    }

    if (!keyExists) {
        cout << "[WARNING] Key not found. Pair not removed." << endl;
    }

    return;
}
void agregarContacto(Contacto contactos[], int &numContactos) {

    std::string nombre;
    int telefono;
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin.ignore();
    getline(std::cin, nombre);
    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> telefono;

    int index = numContactos+1;
    contactos[index].nombre = nombre;
    contactos[index].telefono = telefono;

    numContactos++;

    return;
}
int main() {
    int numContactos = -1;
    Contacto* contactos = (Contacto*)malloc(10*sizeof(Contacto)); 
    agregarContacto(contactos, numContactos);
    HashTable HT;
    HT.ingresarContacto(1234, "Gabriel");
    HT.imprimirTabla();

    return 0;
}