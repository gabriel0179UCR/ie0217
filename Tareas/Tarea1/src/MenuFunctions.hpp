#ifndef MENUFUNCTIONS_HPP
#define MENUFUNCTIONS_HPP

#include <iostream>
#include <string>
#include "Game.hpp"

// Definicion de los encabezados de cada una de las funciones

// Declaracion de la funcion que se encarga de seleccionar la dificultad
int ChooseGameDifficulty();

// Declaracion de la funcion que se encarga de iniciar el juego
void StartGame(AhorcadoGame ahorcado_game);

// Declaracion de la funcion que se encarga de anadir palabras al diccionario
void AddWords();

// Declaracion de la funcion que se encarga de mostrar las palabras del diccionario
void SeeWords(std::string dictionary[], int size);

// Declaracion de la funcion que se encarga de salir del juego
bool ExitGame();

#endif // MENUFUNCTIONS_HPP