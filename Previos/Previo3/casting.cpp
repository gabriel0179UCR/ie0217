#include <iostream>
using namespace std;

int main() {
    // Working of implit type-conversion //

    // Assigning an int value to num_int
    int num_int = 9;

    // Declaring a double type variable
    double num_double;

    // Implicit conversion
    // Assigning int value to a double variable
    num_double = num_int;

    cout << "Implicit conversion" << endl;
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    // Working of explicit type-conversion //
    cout << "\nExplicit conversion" << endl;
    // Initializing a double variable
    double num_double2 = 3.56;
    cout << "num_double2 = " << num_double2 << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double2;
    cout << "num_int1 = " << num_int1 << endl;

    // Function-style conversion from double to int
    int num_int2 = int(num_double2);
    cout << "num_int2 = " << num_int2 << endl;



}