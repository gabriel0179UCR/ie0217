#include "HashTable.hpp"
#include <iostream>
#include <list>
#include <cstring>
using namespace std;


// Definicion del metodo que determina si esta vacio
bool HashTable::estaVacio() const {
    int sum{};
    for (int i{}; i < maxSize; ++i) {
        sum += tabla[i].size();
    }

    if (!sum) {
        return true;
    }
    return false;
}

// Definicion de la funcion que determina los identificadores hash
int HashTable::funcionHash(int key) {
    return key % maxSize;
}

// Definicion de la funcion que permite ingresar datos a la Hash Table
int HashTable::ingresarContacto(int key, string value) {
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

    return valorHash;
}

// Definicion de la funcion que permite eliminar datos de la Hash Table
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

// Definicion de la funcion que imprime la Hash Table
void HashTable::imprimirTabla() {
    for (int i{}; i < maxSize; ++i) {
        if (tabla[i].size() == 0) {
            continue;
        }

        list<pair<int, string>>::iterator filasPtr = tabla[i].begin();
        for (; filasPtr != tabla[i].end(); ++filasPtr) {
            cout << "[INFO] Key: " << filasPtr->first << " Value: " << filasPtr->second <<  endl;
        }
    }
    return;
}
