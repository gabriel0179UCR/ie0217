#ifndef REGULAREXPRESSIONS_HPP
#define REGULAREXPRESSIONS_HPP

#include <string>
using namespace std;

// Expresiones regulares utilizadas
// Nota: Las expresiones funcionan a la inversa, hacen match cuando se identifica la prohibicion

// Identifica si esta el arroba
const string NOT_AT_CHARACTER = "^[^@]+$";

// Identifica los caracteres permitidos (minusculas, mayusculas, punto, guio y guion bajo)
const string NOT_CHARACTERS_ALLOW =  "[^a-zA-Z0-9\\.-_]";

// Identifica si hay un punto al inicio o al final
const string NOT_STARTFINAL_POINT = "^^\\.|\\.$";

// Ayuda para contar el numero de caracteres para el nombre
const string COUNT_CHARACTERS_NAME = "[^\\.-]";

// Identifica los caracteres especiales consecutivos
const string NOT_CONSECUTIVE_SPECIAL_CHARACTERS = "^[^a-zA-Z0-9]{2}+$";

// Identifica si solo hay letras (exceptuando el punto)
const string NOT_LETTERS = "[^a-zA-Z\\.]";

// Identifica si no hay puntos
const string POINT_NUMBER = "^[^\\.]+$";

// Ayuda para contar el numero de caracteres para el dominio y extension
const string COUNT_CHARACTERS_DOMAIN = "[^\\.]";

// Identifica puntos consecutivos
const string NOT_CONSECUTIVE_POINTS = "\\.{2,}";

#endif // REGULAREXPRESSIONS_HPP