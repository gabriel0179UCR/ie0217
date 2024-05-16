#include <regex>
#include <string>
#include <iostream>
#include <algorithm>

// Expresiones regulares
std::string NOT_CHARACTERS_ALLOW =  "^[^a-zA-Z0-9.\\-_]+$";
std::string NOT_STARTFINAL_POINT = "^\\.";
std::string NOT_COUNT_CHARACTERS_NAME = "^[^\\.-]+$";
std::string NOT_CONSECUTIVE_SPECIAL_CHARACTERS = "^[^a-zA-Z0-9]{2}+$";

class ValidadorEmail {
    public:
        //bool validarCorreo(std::string email);
    
    //private:
        bool validarNombre(std::string nombre);
        //bool validarDominio(std::string dominio);
        //bool validarExtension(std::string extension);
};

bool ValidadorEmail::validarNombre (std::string email) {
    // Validar caracteres adminitos

    std::regex pattern1(NOT_CHARACTERS_ALLOW);
    if (std::regex_match(email, pattern1))
        return false;

    std::regex pattern2(NOT_STARTFINAL_POINT);
    if (std::regex_match(email, pattern2))
        return false;

    std::regex pattern3(NOT_COUNT_CHARACTERS_NAME);
    std::regex_iterator<std::string::iterator> it(email.begin(), email.end(), pattern3);
    std::regex_iterator<std::string::iterator> end;
    int contadorPosiciones = 0;
    while (it != end) {
        ++contadorPosiciones;
        ++it;
    }
    if (contadorPosiciones > 15)
        return false;

    std::regex pattern4(NOT_CONSECUTIVE_SPECIAL_CHARACTERS);
    if (std::regex_match(email, pattern4))
        return false;
    
    return true;
}

int main() {
    ValidadorEmail validadoremail;
    bool result = validadoremail.validarNombre("test");
    if (result) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Not pass" << std::endl;
    }
    return 0;
}