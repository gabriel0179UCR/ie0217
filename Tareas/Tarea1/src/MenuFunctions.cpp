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

    switch (game_difficulty) {
        case 1:
            game_difficulty = 7;
            break;
        case 2:
            game_difficulty = 5;
            break;
        case 3:
            game_difficulty = 3;
            break;
    };

    return game_difficulty;
}

void StartGame(AhorcadoGame ahorcado_game){
    std::cout << std::endl << "Inicio del juego" << std::endl;

    char letter;
    std::string try_word;

    while(ahorcado_game.actual_attempts < ahorcado_game.max_attempts) {
        if(ahorcado_game.actual_attempts == ahorcado_game.max_attempts){
            std::cout << std::endl << "Palabra: " << ahorcado_game.actual_word << std::endl;
            std::cout << "Ultimo intento" << std::endl;
            std::cout << "Ingrese la palabra: ";
            std::cin >> try_word;
            if(ahorcado_game.word==try_word){
                std::cout << "GAME OVER";
                break;
            };
        } else {
            std::cout << std::endl << "Palabra: " << ahorcado_game.actual_word <<std::endl;
            std::cout << "Intectos restantes: " << ahorcado_game.max_attempts - ahorcado_game.actual_attempts << std::endl;
            std::cout << "Ingrese una letra: ";
            std::cin >> letter;
        };

        for(int i = 0; i < ahorcado_game.word.length(); i++){
            if(ahorcado_game.word[i] == letter){
                ahorcado_game.actual_word.replace(i, 1, 1, letter);
            };
        };

        if(ahorcado_game.word==ahorcado_game.actual_word){
            std::cout << "La palabra es " <<  ahorcado_game.word << std::endl;
            std::cout << "FELICIDADES" << std::endl;
            std::cout << "GAME OVER";
            break;
        };


        ahorcado_game.actual_attempts++;
    };

    std::cout << "Intentos acabados" << std::endl;
    std::cout << "La palabra es " <<  ahorcado_game.word << std::endl;
    std::cout << "GAME OVER";
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