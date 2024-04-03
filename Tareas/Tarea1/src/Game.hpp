#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>

struct AhorcadoGame {
    std::string word;
    std::string actual_word;
    int max_attempts;
    int actual_attempts;
};


#endif // GAME_HPP