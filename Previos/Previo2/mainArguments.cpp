#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Número de argumentos: " << argc << endl;
    cout << "Nombre del programa: " << argv[0] << endl;

    // Imprimir argumentos adicionales si existen
    if (argc > 1) {
        cout << "Argumentos adicionales:" << endl;
        for (int i = 1; i < argc; ++i) {
            cout << "argv[" << i << "]: " << argv[i] << endl;
        };
    };

    return 0;
}