#include <iostream>
#include <vector>
using namespace std;

// Clase Matriz
template <typename T>
class Matriz {
    public:

        Matriz() {
            cout << "Ingrese el numero de filas: ";
            int _filas;
            cin >> _filas;

            cout << "Ingrese el numero de columnas: ";
            int _columnas;
            cin >> _columnas;

            setDimensiones(_filas, _columnas);
            llenarMatriz();
        }
        ~Matriz() {}
        void setDimensiones(int _filas, int _columnas) {
            filas = _filas;
            columnas = _columnas;
            matriz.resize(filas);
            for (auto& fila : matriz)
                fila.resize(columnas);
            
            return;
        }
        void llenarMatriz() {
            cout << "Ingrese los valores" << endl;
            T value;
            for (int i=0; i<filas; ++i){
                for (int j=0; j<columnas; ++j) {
                    cin >> value;
                    matriz[i][j] = value;
                }
            }
            return;
        }

    private:
        int filas;
        int columnas;
        vector<vector<T>> matriz;
};

// Clase OperacionesBasicas


// Clase ValidadorDeEntrada


// Menu
int main() {
    Matriz<int> test;
    //test.setDimensiones(2,2);
    //test.llenarMatriz();



    return 0;
}