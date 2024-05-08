#include <vector>
using namespace std;

// Clase Matriz
template <typename T>
class Matriz {
    public:

        Matriz() {}
        ~Matriz() {}
        void setDimensiones(int filas, int columnas) {
            matriz.resize(filas);
            for (auto& fila : matriz)
                fila.resize(columnas);
        }
        void llenarMatriz() {
            return;
        }
    private:
        vector<vector<T>> matriz;
};

// Clase OperacionesBasicas


// Clase ValidadorDeEntrada


// Menu
int main() {
    Matriz<int> test;

    test.setDimensiones(2,3);


    return 0;
}