#ifndef VALIDADOREMAIL_HPP
#define VALIDADOREMAIL_HPP

#include <string>

//! Clase validador de email
class ValidadorEmail {
    public:
        //! Metodo principal que valida el formato del correo
        bool validarCorreo(std::string email);
    
    private:
        //! Metodo que valida el formato del nombre
        bool validarNombre(std::string nombre);
        //! Metodo que valida el formato del dominio
        bool validarDominio(std::string dominio);
        //! Metodo que valida el formato de la extension
        bool validarExtension(std::string extension);
};

#endif // VALIDADOREMAIL_HPP