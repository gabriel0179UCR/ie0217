#ifndef REGULAREXPRESSIONS_HPP
#define REGULAREXPRESSIONS_HPP

#include <string>
using namespace std;
const string NOT_AT_CHARACTER = "^[^@]+$";
const string NOT_CHARACTERS_ALLOW =  "^[^a-zA-Z0-9.\\-_]+$";
const string NOT_STARTFINAL_POINT = "^^\\.|\\.$";
const string COUNT_CHARACTERS_NAME = "^[^\\.-]+$";
const string NOT_CONSECUTIVE_SPECIAL_CHARACTERS = "^[^a-zA-Z0-9]{2}+$";
const string NOT_LETTERS = "^[^a-zA-Z\\.]+$";
const string POINT_NUMBER = "^[^.]+$";
const string COUNT_CHARACTERS_DOMAIN = "^[^\\.]+$";
const string NOT_CONSECUTIVE_POINTS = "\\.{2,}";

#endif // REGULAREXPRESSIONS_HPP