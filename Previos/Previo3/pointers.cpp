#include <iostream>
using namespace std;

int main() {
    int var = 5;
    //Declare pointer variable
    int* pointVar;
    // Store address of var
    pointVar = &var;
    // Print value of var
    cout << "var = " << var << endl;
    // Print address of var
    cout << "Address of var (&var) =" << &var << endl;
    // Print pointer pointVar
    cout << "pointVar = " << pointVar << endl;
    // Print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}