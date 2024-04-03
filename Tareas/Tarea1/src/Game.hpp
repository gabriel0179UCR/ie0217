#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>

//! Estructura del juego de Ahorcado
struct AhorcadoGame {
    //! Palabra que se busca adivinar
    std::string word;
    //! Letras de la palabra adivinadas actualmente
    std::string actual_word;
    //! Numero maximo de intentos
    int max_attempts;
    //! Intentos actuales
    int actual_attempts;
};


#endif // GAME_HPP