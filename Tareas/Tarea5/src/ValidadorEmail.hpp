#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <string>

class ValidadorEmail {
    public:
        bool validarCorreo(std::string email);
    
    private:
        bool validarNombre(std::string nombre);
        bool validarDominio(std::string dominio);
        bool validarExtension(std::string extension);
};

#endif // VALIDADOREMAIL_HPP