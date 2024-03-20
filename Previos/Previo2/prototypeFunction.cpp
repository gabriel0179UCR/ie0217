// Using function definition after main() function
// function prototype is declare befor main()

#include <iostream>
using namespace std;

// Function prototype
int add(int, int);

int main() {
    int sum;

    // Calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;

}

// Function definition
int add(int a, int b) {
    return (a + b);
};