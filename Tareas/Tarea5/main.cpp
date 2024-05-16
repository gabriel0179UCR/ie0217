#include <regex>
#include <string>
#include <iostream>

// Expresiones regulares
std::string NOT_CHARACTERS_ALLOW =  "^[^a-zA-Z0-9.\\-_]+$";
std::string NOT_STARTFINAL_POINT = "^\\."; ////////////////// Mejorar
std::string COUNT_CHARACTERS_NAME = "^[^\\.-]+$";
std::string NOT_CONSECUTIVE_SPECIAL_CHARACTERS = "^[^a-zA-Z0-9]{2}+$";

std::string ONLY_LETTERS = "^[^a-zA-Z\\.]+$";
std::string POINT_NUMBER = "^([^.]|\\.{2,})+$";
std::string COUNT_CHARACTERS_DOMAIN = "^[^\\.]+$";
std::string NOT_CONSECUTIVE_POINTS = "\\.{2,}";

class ValidadorEmail {
    public:
        //bool validarCorreo(std::string email);
    
    //private:
        bool validarNombre(std::string nombre);
        bool validarDominio(std::string dominio);
        bool validarExtension(std::string extension);
};

bool ValidadorEmail::validarNombre (std::string email) {
    std::regex pattern1(NOT_CHARACTERS_ALLOW);
    if (std::regex_match(email, pattern1))
        return false;

    std::regex pattern2(NOT_STARTFINAL_POINT);
    if (std::regex_match(email, pattern2))
        return false;

    std::regex pattern3(COUNT_CHARACTERS_NAME);
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

bool ValidadorEmail::validarDominio(std::string dominio) {
    std::regex pattern1(ONLY_LETTERS);
    if (std::regex_match(dominio, pattern1))
        return false;
    
    std::regex pattern2(NOT_STARTFINAL_POINT);
    if (std::regex_match(dominio, pattern2))
        return false;

    std::regex pattern3(POINT_NUMBER);
    if (std::regex_match(dominio, pattern3))
        return false;

    std::regex pattern4(COUNT_CHARACTERS_DOMAIN);
    std::regex_iterator<std::string::iterator> it(dominio.begin(), dominio.end(), pattern4);
    std::regex_iterator<std::string::iterator> end;
    int contadorPosiciones = 0;
    while (it != end) {
        ++contadorPosiciones;
        ++it;
    }
    if (contadorPosiciones >= 3 && contadorPosiciones <= 30)
        return false;
    
    std::regex pattern5(NOT_CONSECUTIVE_POINTS);
    if (std::regex_match(dominio, pattern5))
        return false;
}

bool ValidadorEmail::validarExtension(std::string extension) {

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