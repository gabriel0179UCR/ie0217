#include <iostream>



int main() {
    // Declare an int pointer
    int* pointVar;

    // Dynamically allocate memory
    // for an int variable
    pointVar = new int;

    // Assign value to the variable memory
    *pointVar = 45;

    // Print the value stored in memory
    std::cout << *pointVar; // Output: 45

    // Deallocate the memory
    delete pointVar;

    return 0;

}