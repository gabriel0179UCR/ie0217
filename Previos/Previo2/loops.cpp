#include <iostream>
using namespace std;

int main() {

    int i;

    cout << "\nfor loop using ++i" << endl;
    for (i = 1; i <= 5; ++i) {
        cout << i << " ";
    };

    cout << "\n\nfor loop using array" << endl;
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n : num_array) {
        cout << n << " ";
    };

    cout << "\n\nwhile loop" << endl;
    i = 1;
    while (i <= 5) {
        cout << i << " ";
        ++i;
    };

    cout << "\n\ndo while loop" << endl;
    i = 1;

    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);

    return 0;
}