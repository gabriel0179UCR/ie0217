#include "Funciones.hpp"

int main() {
    const int SIZE = 10000;
    int arr[SIZE];

    // Midiendo Bubble Sort
    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");

    // Midiendo Selection Sort
    generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");

    // Midiendo Insertion Sort
    generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");

    // Midiendo Quick Sort
    generateRandomArray(arr, SIZE);
    measuringQuickSortingTime(quickSort, arr, 0, SIZE-1, "Quick Sort");

    return 0;
}