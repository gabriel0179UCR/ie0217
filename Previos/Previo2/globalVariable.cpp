#include <iostream>
using namespace std;

// Global variable:
int g;

int main () {
    // Local variable:
    int a, b;

    // Initialization
    a = 10;
    b = 20;
    g = a + b;

    cout << g;

    return 0;
}