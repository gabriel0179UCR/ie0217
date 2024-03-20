#include <iostream>
using namespace std;

int main() {
    int var1 = 2;

    switch (var1) {
        case 1:
            cout << "Case 1!\n";
            break;
        case 2:
        case 3:
            cout << "Case Final!\n";
            break;
        
        default:
            cout << "Case default!\n";
            break;
    }
    return 0;
}