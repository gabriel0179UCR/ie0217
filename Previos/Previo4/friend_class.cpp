#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;

        // Friend class declaration
        friend class ClassB;
    
    public:
        // Constructor to initialize numA to 12
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;

    public:
        // Constructor to initialize numB to 1
        ClassB() : numB(1) {}

        // Member function to add numA
        // from Class A and numB from Class B
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};

int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}