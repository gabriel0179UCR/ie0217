#ifndef REGULAREXPRESSIONS_HPP
#define REGULAREXPRESSIONS_HPP

#include <string>

std::string NOT_CHARACTERS_ALLOW =  "^[^a-zA-Z0-9.\\-_]+$";
std::string NOT_STARTFINAL_POINT = "^^\\.|\\.$";
std::string COUNT_CHARACTERS_NAME = "^[^\\.-]+$";
std::string NOT_CONSECUTIVE_SPECIAL_CHARACTERS = "^[^a-zA-Z0-9]{2}+$";

std::string ONLY_LETTERS = "^[^a-zA-Z\\.]+$";
std::string POINT_NUMBER = "^([^.]|\\.{2,})+$";
std::string COUNT_CHARACTERS_DOMAIN = "^[^\\.]+$";
std::string NOT_CONSECUTIVE_POINTS = "\\.{2,}";

#endif // REGULAREXPRESSIONS_HPP