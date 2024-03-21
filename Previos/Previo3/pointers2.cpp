#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointVar;

    // Store address of var
    pointVar = &var;

    // Print var
    cout << "var = " << var << endl;

    // Print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;
        
    cout << "Changing value of var to 7:" << endl;

    // Change value of var to 7
    var = 7;

    // Print var
    cout << "var = " << var << endl;

    // Print *pointer
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // Change value of var to 16
    *pointVar = 16;

    // Print var
    cout << "var = " << var << endl;

    // Print *pointer
    cout << "*pointVar = " << *pointVar << endl;

    return 0;
}