#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP


#include <string>
using namespace std;

// Declaracion de las funciones de ordenamiento
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

//  Declaracion de la funcion que asigna numeros random en el array
void generateRandomArray(int arr[], int n);

// Declaracion de las funciones que miden los tiempos de las funciones de ordenamiento
void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName);
void measuringQuickSortingTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName);


#endif // FUNCIONES_HPP