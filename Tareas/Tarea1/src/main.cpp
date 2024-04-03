#include <iostream>
#include "MenuFunctions.hpp"
#include "Game.hpp"

// Declaracion de las opciones del menu
enum Opciones {
    DIFFICULTY = 1,
    START,
    ADD,
    SHOW,
    EXIT
};

// Declaracion de las palabras
std::string dictionary_words[3] = {"Test", "Test2", "Test3"};

int main() {

    AhorcadoGame ahorcado_game;
    int opcion;

    int dictionary_size = sizeof(dictionary_words) / sizeof(dictionary_words[0]);

    // Menu
    std::cout << "///// Ahorcado /////" << std::endl;

    std::cout << "1. Elegir la dificultad del juego" << std::endl;
    std::cout << "2. Iniciar el juego" << std::endl;
    std::cout << "3. Agregar palabras al diccionario de palabras" << std::endl;
    std::cout << "4. Ver diccionario de palabras" << std::endl;
    std::cout << "5. Salir del programa" << std::endl;
    
    std::cout << "Ingrese su opcion: ";
    std::cin >> opcion;

    switch (opcion) {
        case DIFFICULTY:
            ahorcado_game.max_attempts = ChooseGameDifficulty();
            break;
        case START:
            StartGame();
            break;
        case ADD:
            AddWords();
            break;
        case SHOW:
            SeeWords(dictionary_words, dictionary_size);
            break;
        case EXIT: // Listo
            ExitGame();
            break;
    };
    return 0;
}