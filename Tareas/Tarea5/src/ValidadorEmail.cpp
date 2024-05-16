#include "ValidadorEmail.hpp"
#include "RegularExpressions.hpp"
#include <regex>
#include <vector>
#include <iostream>

bool ValidadorEmail::validarCorreo(std::string email) {
    size_t dash = email.find('@');
    std::string nombre = email.substr(0, dash);
    std::string dominioAndExtension = email.substr(dash + 1);
    std::string betweenPoints;
    std::vector<std::string> parts;
    size_t pos = 0;
    std::string token;
    while ((pos = dominioAndExtension.find(".")) != std::string::npos) {
        token = dominioAndExtension.substr(0, pos);
        parts.push_back(token);
        dominioAndExtension.erase(0, pos + 1);
    }
    parts.push_back(dominioAndExtension);

    std::string dominio;
    std::string extension;
    int size = parts.size();
    if (size < 2) {;
        return 0; // ERROR
    } else if (size == 2) {
        dominio = parts[0];
        extension = parts[1];
    } else {
        if (parts[size-1].length()+parts[size-2].length() > 6) {
            extension = parts[size-1];
        } else {
            extension = parts[size-2] + "." + parts[size-1];
        }
    }
    size_t extensionIndex = email.substr(dash + 1).find(extension);
    std::cout << "Index: " << extensionIndex << std::endl;
    dominio = email.substr(dash + 1, extensionIndex - 1);
    bool valNombre = validarNombre(nombre);
    bool valDominio = validarDominio(dominio);
    bool valExtension = validarExtension(extension);

    if (valNombre && valDominio && valExtension)
        return true;
    
    return false;
}

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
    
    return true;
}

bool ValidadorEmail::validarExtension(std::string extension) {
    std::regex pattern1(ONLY_LETTERS);
    std::regex_iterator<std::string::iterator> it(extension.begin(), extension.end(), pattern1);
    std::regex_iterator<std::string::iterator> end;
    int contadorPosiciones = 0;
    while (it != end) {
        ++contadorPosiciones;
        ++it;
    }
    if (contadorPosiciones >= 2 && contadorPosiciones <= 6 )
        return false;
    
    std::regex pattern2(NOT_STARTFINAL_POINT);
    if (std::regex_match(extension, pattern2))
        return false;
    
    std::regex pattern3(NOT_CONSECUTIVE_POINTS);
    if (std::regex_match(extension, pattern3))
        return false;
    
    return true;
}