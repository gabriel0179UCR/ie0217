#include "MenuFunctions.hpp"

//! Funcion que se encarga de seleccionar la dificultad
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

    //! Retorna la dificultad
    //! - 1: Facil: 7 intentos permitidos
    //! - 2: Medio: 5 intentos permitidos
    //! - 3: Dificil: 3 intentos permitidos
    return game_difficulty;
}

//! Funcion que se encarga de iniciar el juego
void StartGame(AhorcadoGame ahorcado_game){
    std::cout << std::endl << "Inicio del juego" << std::endl;

    char letter;
    std::string try_word;

    //! - Un loop while para realizar los intentos necesario para adivinar la palabra
    while(ahorcado_game.actual_attempts <= ahorcado_game.max_attempts) {

        //! - Si se llego al limite de intentos, se indica que se posee un ultimo intento para adivinar la palabra
        if(ahorcado_game.actual_attempts == ahorcado_game.max_attempts){
            std::cout << std::endl << "Palabra: " << ahorcado_game.actual_word << std::endl;
            std::cout << "Ultimo intento" << std::endl;
            std::cout << "Ingrese la palabra: ";
            std::cin >> try_word;
            if(ahorcado_game.word==try_word){
                std::cout << "FELICIDADES" << std::endl;
                std::cout << "La palabra es " <<  ahorcado_game.word << std::endl;
                break;
            };

        //! - Sino se prosigue a ingresar una letra
        } else {
            std::cout << std::endl << "Palabra: " << ahorcado_game.actual_word <<std::endl;
            std::cout << "Intectos restantes: " << ahorcado_game.max_attempts - ahorcado_game.actual_attempts << std::endl;
            std::cout << "Ingrese una letra: ";
            std::cin >> letter;
        };

        //! - Se revisa mendiante un for loop si la letra pertenece a la palabra
        for(int i = 0; i < ahorcado_game.word.length(); i++){

            //! - Si la letra pertenece a la palabra, se anade a la palabra actual
            if(ahorcado_game.word[i] == letter){
                ahorcado_game.actual_word.replace(i, 1, 1, letter);
            };
        };

        //! - Se revisa si la palabra actual es igual a la palabra a adivinadar
        if(ahorcado_game.word==ahorcado_game.actual_word){
            std::cout << "FELICIDADES" << std::endl;
            std::cout << "La palabra es " <<  ahorcado_game.word << std::endl;
            break;
        };

        // Se incrementa el contador de intentos realizados en 1
        ahorcado_game.actual_attempts++;
    };

    //! - Si no se logro adivinar la palabra se indica
    if(ahorcado_game.actual_attempts>ahorcado_game.max_attempts) {
        std::cout << "Intentos acabados" << std::endl;
        std::cout << "La palabra es " <<  ahorcado_game.word << std::endl;
        std::cout << "GAME OVER" << std::endl;     
    };

}

//! Funcion que se encarga de anadir palabras al diccionario
void AddWords(){
    std::cout << "Agregando palabras" << std::endl;
}

//! Funcion que se encarga de mostrar las palabras del diccionario
void SeeWords(std::string dictionary[], int size){

    std::cout << std::endl << "Palabras en el diccionario: " << std::endl;

    //! - Se accede a las palabras del diccionario mediante un for loop
    for (int i = 0; i < size; ++i) {
        std::cout << i << ". " << dictionary[i] << std::endl;
    }
}

//! Funcion que se encarga de salir del juego
bool ExitGame(){
    std::cout << "Saliendo del programa" << std::endl;

    //! - Retorna la condicion true para indicar que se debe salir del juego
    return true;
}