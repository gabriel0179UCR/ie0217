#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> nums{1, 2, 3, 4, 5};

    // Initialize an iterator to point
    // to beginning of a forward list
    list<int>::iterator itr = nums.begin();


    cout << "Moving forward: " << endl;

    // display the elements in forward order
    while (itr != nums.end()) {
        cout << *itr << ",";

        // move iterator by 1 position forward
        itr++;
    }

    cout << endl << "Moving backward: " << endl;

    // display the elements in backward order
    while (itr != nums.begin()) {
        if (itr != nums.end()) {
            cout << *itr << ",";
        }
        
        // move iterator by 1 position backward
        itr--;
    }

    cout << *itr << endl;

    return 0;
}