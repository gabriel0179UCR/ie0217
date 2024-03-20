#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Outer if condition
    if (num != 0) {
        
        // Inner if condition
        if (num > 0) {
            cout << "The number is positive." << endl;
        }
        // Inner else condition
        else {
            cout << "The number is negative." << endl;
        };
    }
    // Outer else condition
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    };
    cout << "This line is always printed." << endl;

    return 0;
}