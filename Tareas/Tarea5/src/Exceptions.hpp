#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <string>
using namespace std;

//! Mensajes de error para el manejo de excepciones
const string ERROR_EMAIL = "ERROR -> Email: ";
const string ERROR_NAME = "ERROR -> Nombre: ";
const string ERROR_DOMAIN = "ERROR -> Dominio: ";
const string ERROR_EXTENSION = "ERROR -> Extension: ";
const string ERROR_FORMAT_EMAIL = "Se debe seguir el formato nombre@dominio.extension";
const string ERROR_INVALID_CHARACTER_NAME = "Se encuentran caracteres invalidos. Caracteres admitidos; letras mayusculas y minusculas, numeros, ., -, y _";
const string ERROR_INVALID_CHARACTER_DOMAIN = "Se presentan caracteres diferentes de letras.";
const string ERROR_START_END_POINT = "Se encuentran puntos al inicio y/o final.";
const string ERROR_MAX_CHARACTER_NAME = "El maximo de caracteres son 15.";
const string ERROR_MAX_CHARACTER_DOMAIN = "El maximo de caracteres son 30 y minimo son 3.";
const string ERROR_MAX_CHARACTER_EXTENSION = "El maximo de caracteres son 6 y minimo son 2.";
const string ERROR_CONSECUTIVE_CHARACTERS_NAME = "No se pueden tener caracteres especiales consecutivos.";
const string ERROR_CONSECUTIVE_CHARACTERS_DOMAIN_EXTENSION = "No se pueden tener puntos consecutivos.";
const string ERROR_NO_POINTS = "Se debe presentar al menos un punto.";

#endif //EXCEPTIONS_HPP