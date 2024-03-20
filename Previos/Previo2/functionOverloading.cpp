// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;

// Function with float type parameter
float absolute(float var) {
    if (var < 0.0) {
        var = -var;
    };

    return var;
}

// Function with int type parameter
int absolute(int var) {
    if (var < 0) {
        var = -var;
    };

    return var;
}

int main() {
    // Call function with int type parameter

    int num1 = -5;
    float num2 = 5.5;
    cout << "Absolute value of -5 = " << absolute(num1) << endl;
    cout << "Absolute value of 5.5 = " << absolute(num2) << endl;

    return 0;
}
