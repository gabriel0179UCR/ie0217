// Optimized bubble sort

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {
    // loop to access each array element
    for (int step = 0; step < (size-1); ++step) {

        // check if swapping occurs
        int swapped = 0;

        // loop to compare array elements
        for (int i = 0; i < (size-step-1); ++i) {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1]) {

                // swapping elements if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }

        // no swapping means the array is already sorted
        // so no need of further comparison
        if (swapped == 0)
            break;
    }
}

// print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // find array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    // size tenia un valor de 45 en este punto y se tuve que reasignar 
    // preguntar en consulta.
    size = sizeof(data) / sizeof(data[0]); 
    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}