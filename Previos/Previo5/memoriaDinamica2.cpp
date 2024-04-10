#include <iostream>



int main() {
    // Declare an int pointer
    int* pointInt;

    // Declare an int pointer
    float* pointFloat;

    // Dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // Assign value to the variable memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    // Print the value stored in memory
    std::cout << *pointInt << std::endl;
    std::cout << *pointFloat << std::endl;

    // Deallocate the memory
    delete pointInt;
    delete pointFloat;

    return 0;

}