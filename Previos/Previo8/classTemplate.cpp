// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// class template
template <class T>
class Number {
    private:
        // Variable of type T
        T num;
    
    public:
        Number(T n) : num(n) {} // constructor

        T getNum() {
            return num;
        }
};

int main() {

    // Create object with int type
    Number<int> numberInt(7);

    // Create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}