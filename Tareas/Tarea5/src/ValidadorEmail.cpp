#include "ValidadorEmail.hpp"
#include "RegularExpressions.hpp"
#include "Exceptions.hpp"
#include <regex>
#include <vector>
#include <iostream>
// Definicion del metodo validarCorreo
bool ValidadorEmail::validarCorreo(std::string email) {
    // Se revisa si se presenta el arroba
    try {
        std::regex pattern(NOT_AT_CHARACTER);
        if (std::regex_match(email, pattern))
            throw std::invalid_argument(ERROR_EMAIL+ERROR_FORMAT_EMAIL);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return false;
    }

    size_t at = email.find('@');
    std::string nombre = email.substr(0, at);
    std::string dominioAndExtension = email.substr(at + 1);
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
    try {
        if (size < 2) {;
            throw std::invalid_argument(ERROR_EMAIL+ERROR_FORMAT_EMAIL);
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
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return false;
    }
    size_t extensionIndex = email.substr(at + 1).find(extension);
    dominio = email.substr(at + 1, extensionIndex - 1);

    // Se revisa el formato del nombre
    bool valNombre = validarNombre(nombre);

    // Se revisa el formato del dominio
    bool valDominio = validarDominio(dominio);

    // Se revisa el formato de la extension
    bool valExtension = validarExtension(extension);

    // Si los tres formatos son correctos, true
    if (valNombre && valDominio && valExtension)
        return true;
    
    return false;
}
// Definicion del metodo validarNombre
bool ValidadorEmail::validarNombre (std::string nombre) {
    bool approve = true;
    // Se valida los caracteres permitidos
    try {
        std::regex pattern1(NOT_CHARACTERS_ALLOW);
        if (std::regex_search(nombre, pattern1))
            throw std::invalid_argument(ERROR_NAME+ERROR_INVALID_CHARACTER_NAME);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay puntos al inicio o al final
    try {
        std::regex pattern2(NOT_STARTFINAL_POINT);
        if (std::regex_search(nombre, pattern2))
            throw std::invalid_argument(ERROR_NAME+ERROR_START_END_POINT);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida la extension del nombre
    try {
        std::regex pattern3(COUNT_CHARACTERS_NAME);
        std::regex_iterator<std::string::iterator> it(nombre.begin(), nombre.end(), pattern3);
        std::regex_iterator<std::string::iterator> end;
        int contadorPosiciones = 0;
        while (it != end) {
            ++contadorPosiciones;
            ++it;
        }
        std::cout << contadorPosiciones << std::endl;
        if (contadorPosiciones > 15)
            throw std::invalid_argument(ERROR_NAME+ERROR_MAX_CHARACTER_NAME);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay caracteres especiales consecutivos
    try {
        std::regex pattern4(NOT_CONSECUTIVE_SPECIAL_CHARACTERS);
        if (std::regex_search(nombre, pattern4))
            throw std::invalid_argument(ERROR_NAME+ERROR_CONSECUTIVE_CHARACTERS_NAME);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    return approve;
}
//! Definicion del metodo validarDominio
bool ValidadorEmail::validarDominio(std::string dominio) {
    bool approve = true;
    // Se valida si hay solo letras
    std::regex pattern1(NOT_LETTERS);
    try {
        if (std::regex_search(dominio, pattern1)) 
            throw std::invalid_argument(ERROR_DOMAIN+ERROR_INVALID_CHARACTER_DOMAIN);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay punto al inicio o al final
    std::regex pattern2(NOT_STARTFINAL_POINT);
    try {
        if (std::regex_search(dominio, pattern2))
            throw std::invalid_argument(ERROR_DOMAIN+ERROR_START_END_POINT);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida que haya al menos un punto
    std::regex pattern3(POINT_NUMBER);
    try {
        if (std::regex_search(dominio, pattern3)) 
            throw std::invalid_argument(ERROR_DOMAIN+ERROR_NO_POINTS);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida el tamanio del dominio
    std::regex pattern4(COUNT_CHARACTERS_DOMAIN);
    std::regex_iterator<std::string::iterator> it(dominio.begin(), dominio.end(), pattern4);
    std::regex_iterator<std::string::iterator> end;
    int contadorPosiciones = 0;
    while (it != end) {
        ++contadorPosiciones;
        ++it;
    }
    try {
        if (contadorPosiciones >= 3 && contadorPosiciones <= 30)
            throw std::invalid_argument(ERROR_DOMAIN+ERROR_MAX_CHARACTER_DOMAIN);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay puntos consecutivos
    std::regex pattern5(NOT_CONSECUTIVE_POINTS);
    try {
        if (std::regex_search(dominio, pattern5))
            throw std::invalid_argument(ERROR_DOMAIN+ERROR_CONSECUTIVE_CHARACTERS_DOMAIN_EXTENSION);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }

    return approve;
}
//! Definicion del metodo validarExtension
bool ValidadorEmail::validarExtension(std::string extension) {
    bool approve = true;
    // Se valida el tamanio de la extension
    std::regex pattern1(COUNT_CHARACTERS_DOMAIN);
    std::regex_iterator<std::string::iterator> it(extension.begin(), extension.end(), pattern1);
    std::regex_iterator<std::string::iterator> end;
    int contadorPosiciones = 0;
    while (it != end) {
        ++contadorPosiciones;
        ++it;
    }
    try {
        if (contadorPosiciones >= 2 && contadorPosiciones <= 6 )
            throw std::invalid_argument(ERROR_EXTENSION+ERROR_MAX_CHARACTER_EXTENSION);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si solo hay letras
    std::regex pattern2(NOT_LETTERS);
    try {
        if (std::regex_search(extension, pattern2)) 
            throw std::invalid_argument(ERROR_EXTENSION+ERROR_INVALID_CHARACTER_DOMAIN);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay punto al inicio o al final
    std::regex pattern3(NOT_STARTFINAL_POINT);
    try {
        if (std::regex_search(extension, pattern3))
            throw std::invalid_argument(ERROR_EXTENSION+ERROR_START_END_POINT);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    // Se valida si hay puntos consecutivos
    std::regex pattern4(NOT_CONSECUTIVE_POINTS);
    try {
    if (std::regex_search(extension, pattern4))
        throw std::invalid_argument(ERROR_EXTENSION+ERROR_CONSECUTIVE_CHARACTERS_DOMAIN_EXTENSION);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        approve = false;
    }
    return approve;
}