#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Initialize a vector of int type
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // print the vector
    cout << "Numbers are: ";
    for (auto &num: numbers) {
        cout << num << ", ";
    }

    return 0;
}
