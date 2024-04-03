#include "MenuFunctions.hpp"

int ChooseGameDifficulty(){
    std::cout << "Dificultad del juego" << std::endl;

    int game_difficulty;

    std::cout << std::endl << "Dificultades" << std::endl;
    std::cout << "1. Facil: 7 intentos permitidos" << std::endl;
    std::cout << "2. Medio: 5 intentos permitidos" << std::endl;
    std::cout << "3. Dificil: 3 intentos permitidos" << std::endl;
    std::cout << "Seleccione la dificultad: ";
    std::cin >> game_difficulty;

    return game_difficulty;
}

void StartGame(AhorcadoGame ahorcado_game){
    std::cout << "Inicio del juego" << ahorcado_game.word << std::endl;
}

void AddWords(){
    std::cout << "Agregando palabras" << std::endl;
}

void SeeWords(std::string dictionary[], int size){
    std::cout << std::endl << "Palabras en el diccionario: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << i << ". " << dictionary[i] << std::endl;
    }
}

void ExitGame(){
    std::cout << "Saliendo del programa" << std::endl;
}