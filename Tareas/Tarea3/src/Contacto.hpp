#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <iostream>
#include <string>

/* Estructura para definir los Contactos (Nombre y Telefono) */
struct Contacto {
    std::string nombre;
    int telefono;
};

/* Estructura para definir los Contactos enlazados */
struct ContactoCloud {
    std::string nombre;
    int telefono;
    int hashTableKey;
    ContactoCloud* siguiente;
};


#endif // CONTACTO_HPP