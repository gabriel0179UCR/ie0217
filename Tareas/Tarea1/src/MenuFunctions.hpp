#ifndef MENUFUNCTIONS_HPP
#define MENUFUNCTIONS_HPP
#include <iostream>

#include <string>
#include "Game.hpp"
// Definicion de los encabezados de cada una de las funciones
int ChooseGameDifficulty();
void StartGame(AhorcadoGame ahorcado_game);
void AddWords();
void SeeWords(std::string dictionary[], int size);
void ExitGame();

#endif // MENUFUNCTIONS_HPP