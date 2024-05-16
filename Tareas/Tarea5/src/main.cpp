#include "ValidadorEmail.hpp"
#include <iostream>

int main() {
    ValidadorEmail validadoremail;
    bool result = validadoremail.validarCorreo("nomabre@dominiodominio.ext");
    if (result) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Not pass" << std::endl;
    }
    return 0;
}