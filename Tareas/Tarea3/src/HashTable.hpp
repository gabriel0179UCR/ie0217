#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>
#include <list>
#include <cstring>
#include "Contacto.hpp"
using namespace std;
#define MAX_KEYS 100

class HashTable {
    private:
        static const int maxSize = MAX_KEYS;
        list<pair<int, string>> tabla[maxSize];
    
    public:
        //virtual ~HashTable(){} // Destructor
        bool estaVacio() const;
        int funcionHash(int key);
        int ingresarContacto(int key, string value);
        void eliminarContacto(Contacto contactos[], int numContactos, string nombre);
        void imprimirTabla();
};

#endif // HASHTABLE_HPP