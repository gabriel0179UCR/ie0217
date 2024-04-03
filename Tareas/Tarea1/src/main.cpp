#include <iostream>
#include <list>
#include <cstdlib>
#include "MenuFunctions.hpp"
#include "Game.hpp"
#include <time.h>

// Declaracion de las opciones del menu
enum Opciones {
    DIFFICULTY = 1,
    START,
    ADD,
    SHOW,
    EXIT
};

// Declaracion de las palabras
std::string dictionary_words[3] = {"Estructuras", "Ingenieria", "Programacion"};


// Funcion principal
int main() {

    AhorcadoGame ahorcado_game;
    int opcion;

    ahorcado_game.max_attempts = 7;

    bool exit_game = false;

    int dictionary_size = sizeof(dictionary_words) / sizeof(dictionary_words[0]);

    // Loop del menu para acceder a todas las opciones
    while(!exit_game){
        std::cout << "///// Ahorcado /////" << std::endl;
    
        std::cout << "1. Elegir la dificultad del juego" << std::endl;
        std::cout << "2. Iniciar el juego" << std::endl;
        std::cout << "3. Agregar palabras al diccionario de palabras" << std::endl;
        std::cout << "4. Ver diccionario de palabras" << std::endl;
        std::cout << "5. Salir del programa" << std::endl;
        
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        // Se utiliza un switch para determinar la opcion seleccionada por el usuario
        switch (opcion) {
            case DIFFICULTY:
                ahorcado_game.max_attempts = ChooseGameDifficulty();
                break;
            case START:
                srand(time(0));
                ahorcado_game.word = dictionary_words[rand()%dictionary_size];
                ahorcado_game.actual_word.assign(ahorcado_game.word.length(), '_');
                ahorcado_game.actual_attempts = 0;
                StartGame(ahorcado_game);
                break;
            case ADD:
                AddWords();
                break;
            case SHOW:
                SeeWords(dictionary_words, dictionary_size);
                break;
            case EXIT:
                exit_game = ExitGame();
                break;
        };
    
    };
    return 0;
}