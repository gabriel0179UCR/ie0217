#ifndef MENUFUNCTIONS_HPP
#define MENUFUNCTIONS_HPP
#include <iostream>

#include <string>
// Definicion de los encabezados de cada una de las funciones
int ChooseGameDifficulty();
void StartGame();
void AddWords();
void SeeWords(std::string dictionary[], int size);
void ExitGame();

#endif // MENUFUNCTIONS_HPP