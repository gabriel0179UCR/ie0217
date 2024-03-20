#include <iostream>
using namespace std;


int main() {

    // Declare local variable
    int number = 5;

    
    // Condition: If
    cout << "Condition If\n";

    // - If condition
    if (number > 0) {
        cout << "1. Condition is true\n";
    };

    cout << "1. Out of the if condition\n";

    if (number < 0) {
        cout << "2. Condition is true\n";
    };

    cout << "2. Out of the if condition\n";

    // Condition: If Else
    cout << "\nCondition If Else\n";

    if (number > 0) {
        cout << "3. Condition is true\n";
    } else {
        cout << "3. Condition is false\n";
    };

    cout << "3. Out of the if else condition\n";

    if (number < 0) {
        cout << "4. Condition is true\n";
    } else {
        cout << "4. Condition is false\n";
    };

    cout << "4. Out of the if else condition\n";

    // Condition: else if
    cout << "\nCondition Else If\n";

    // 1st Condition is true
    number = 2;
    if (number > 0) {
        cout << "5. 1st Condition is true\n";
    }
    else if (number == 0) {
        cout << "5. 2nd Condition is true\n";
    }
    else {
        cout << "5. All Conditions are false\n";
    };

    cout << "5. Out of the else if condition\n";

    // 2nd Condition is true
    number = 0; 
    if (number > 0) {
        cout << "6. 1st Condition is true\n";
    }
    else if (number == 0) {
        cout << "6. 2nd Condition is true\n";
    }
    else {
        cout << "6. All Conditions are false\n";
    };

    cout << "6. Out of the else if condition\n";

    // All conditions are false
    number = -2;
    if (number > 0) {
        cout << "7. 1st Condition is true\n";
    }
    else if (number == 0) {
        cout << "7. 2nd Condition is true\n";
    }
    else {
        cout << "7. All Conditions are false\n";
    };

    cout << "7. Out of the else if condition\n";

    return 0;
}