#include <iostream>
#include <vector>
using namespace std;

// Clase Matriz
template <typename T>
class Matriz {
    public:
        int filas;
        int columnas;
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
        vector<vector<T>> matriz;
};

// Clase OperacionesBasicas
template <typename T, typename U>
class OperacionesBasicas {
    public:
        void validarSumaResta(Matriz<T>&a, Matriz<U>&b) {
            if (a.filas == b.filas && a.columnas == b.columnas)
                cout << "Suma o resta valida" << endl;
        }
        void validarMultiplicacion(Matriz<T>&a, Matriz<U>&b) {
            if (a.columnas == b.filas)
                cout << "Multiplicacion valida" << endl;
        }
        void sumaMatrices(Matriz<T>&a, Matriz<U>&b) {
            for (int i=0; i<a.filas; ++i){
                for (int j=0; j<a.columnas; ++j) {
                    cout << a.matriz[i][j] + b.matriz[i][j] << " ";
                }
                cout << endl;
            }
        }
        void restarMatrices(Matriz<T>&a, Matriz<U>&b) {
            for (int i=0; i<a.filas; ++i){
                for (int j=0; j<a.columnas; ++j) {
                    cout << a.matriz[i][j] - b.matriz[i][j] << " ";
                }
                cout << endl;
            }
        }
        void multiplicarMatrices(Matriz<T>&a, Matriz<U>&b) {
            vector<vector<T>> result(a.filas, b.columnas);
            for (int i = 0; i < a.filas; ++i) {
                for (int j = 0; j < b.columnas; ++j) {
                    for (int k = 0; k < a.columnas; ++k) {
                        result[i][j] += a.matriz[i][k] * b.matriz[k][j];
                    }
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
};

// Clase ValidadorDeEntrada


// Menu
int main() {
    Matriz<int> test;

    return 0;
}