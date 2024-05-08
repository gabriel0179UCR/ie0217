#include <iostream>
#include <vector>
#include <complex>
#include <ctime>
using namespace std;

// Clase OperacionesBasicas

template <typename T>
//! Clase de operaciones basicas entre matrices
class OperacionesBasicas {
    public:
        //! Metodo que permite validar la suma o resta de matrices
        void validarSumaResta(vector<vector<T>>&a, vector<vector<T>>&b) {
            int aFilas = a.size();
            int aColumnas = a[0].size();
            int bFilas = b.size();
            int bColumnas = b[0].size();
            if (aFilas == bFilas && aColumnas == bColumnas)
                cout << "Suma o resta valida" << endl;
        }
        //! Metodo que permite validar la multiplicacion de matrices
        void validarMultiplicacion(vector<vector<T>>&a, vector<vector<T>>&b) {
            int aColumnas = a[0].size();
            int bFilas = b.size();
            if (aColumnas == bFilas)
                cout << "Multiplicacion valida" << endl;
        }
        //! Metodo que permite la suma de matrices
        vector<vector<T>> sumaMatrices(vector<vector<T>>&a, vector<vector<T>>&b) {
            int aFilas = a.size();
            int aColumnas = a[0].size();
            vector<vector<T>> resultadoSuma(aFilas, vector<T>(aColumnas));
            for (int i=0; i<aFilas; ++i){
                for (int j=0; j<aColumnas; ++j) {
                    resultadoSuma[i][j] = a[i][j] + b[i][j];
                }
            }
            return resultadoSuma;
        }
        //! Metodo que permite al resta de matrices
        vector<vector<T>> restaMatrices(vector<vector<T>>&a, vector<vector<T>>&b) {
            int aFilas = a.size();
            int aColumnas = a[0].size();
            vector<vector<T>> resultadoResta(aFilas, vector<T>(aColumnas));
            for (int i=0; i<aFilas; ++i){
                for (int j=0; j<aColumnas; ++j) {
                    resultadoResta[i][j] = a[i][j] - b[i][j];
                }
            }
            return resultadoResta;
        }
        //! Metodo que permite la multiplicacion de matrices
        vector<vector<T>> multiplicarMatrices(vector<vector<T>>&a, vector<vector<T>>&b) {
            int aFilas = a.size();
            int aColumnas = a[0].size();
            int bColumnas = b[0].size();
            vector<vector<T>> resultadoMultiplicacion(aFilas, vector<T>(bColumnas));
            for (int i = 0; i < aFilas; ++i) {
                for (int j = 0; j < bColumnas; ++j) {
                    for (int k = 0; k < aColumnas; ++k) {
                        resultadoMultiplicacion[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            return resultadoMultiplicacion;
        }
};


template <typename T>
//! Clase de Matriz
class Matriz {
    public:
        int filas;
        int columnas;
        vector<vector<T>> matriz;
        Matriz() {} //! Constructor
        ~Matriz() {} //! Destructor
        //! Metodo que permite dimencionar la matriz
        void setDimensiones(int _filas = 0, int _columnas = 0, bool _result = false) {
            if (!_result) {
                cout << "Ingrese el numero de filas: ";
                cin >> filas;
                cout << "Ingrese el numero de columnas: ";
                cin >> columnas;
            } else {
                filas = _filas;
                columnas = _columnas;
            }
            matriz.resize(filas);
            for (auto& fila : matriz)
                fila.resize(columnas);
            
            return;
        }
        //! Metodo que permite llenar los datos de la matriz
        void llenarMatriz() {
            cout << "Ingrese los valores" << endl;
            T value;
            for (int i=0; i<filas; ++i){
                for (int j=0; j<columnas; ++j) {
                    cout << "Ingrese el valor: ";
                    cin >> value;
                    matriz[i][j] = value;
                }
            }
            return;
        }
        //! Metodo que permite llenar los datos de la matriz con datos aleatorios
        void llenarMatrizAleatorio() {
            srand(time(0));
            for (int i=0; i<filas; ++i){
                for (int j=0; j<columnas; ++j) {
                    matriz[i][j] = rand() % 100;
                }
            }
            return;
        }
        //! Metodo que permite mostrar la matriz en la terminal
        void mostrarMatriz(){
            for (int i=0; i<filas; ++i){
                for (int j=0; j<columnas; ++j) {
                    cout << matriz[i][j] << " ";
                }
                cout << endl;
            }
        }
        //! Metodo que permite la suma de dos matrices
        Matriz operator+ (const Matriz<T>a) {
            vector<vector<T>> matrizA = a.matriz;
            OperacionesBasicas<T> operacionesBasicas;
            operacionesBasicas.validarSumaResta(matriz, matrizA);
            Matriz<T> resultado;
            resultado.setDimensiones(filas, columnas, true);
            resultado.matriz = operacionesBasicas.sumaMatrices(matriz, matrizA);
            return resultado;
        }
        //! Metodo que permite la resta de dos matrices
        Matriz operator- (const Matriz<T>a) {
            OperacionesBasicas<T> operacionesBasicas;
            vector<vector<T>> matrizA = a.matriz;
            operacionesBasicas.validarSumaResta(matriz, matrizA);
            Matriz<T> resultado;
            resultado.setDimensiones(filas, columnas, true);
            resultado.matriz = operacionesBasicas.restaMatrices(matriz, matrizA);
            return resultado;
        }
        //! Metodo que permite la multiplicacion de dos matrices
        Matriz operator* (const Matriz<T>a) {
            vector<vector<T>> matrizA = a.matriz;
            OperacionesBasicas<T> operacionesBasicas;
            operacionesBasicas.validarMultiplicacion(matriz, matrizA);
            Matriz<T> resultado;
            resultado.setDimensiones(a.filas, columnas, true);
            resultado.matriz = operacionesBasicas.multiplicarMatrices(matriz, matrizA);
            return resultado;
        }
};

// Clase ValidadorDeEntrada
class ValidadorDeEntrada {
    public:
        void validarTipoDato(string input) {
            if (input == "int" || input == "float" || input == "std::complex") {
                cout << "Valor correcto" << endl;
            }

        }
         void validarDimensiones(int tamano) {
            if (tamano <= 0) {
                cout << "Valor incorrecto" << endl;
            }
        }
};


enum Opciones {
    TIPODATO = 1,
    PROPIEDADES,
    OPERACION,
    DATOSALEATORIOS,
    MOSTRAR,
    EJECUTAR,
    EXIT
};

enum TIPO {
    INT = 1,
    FLOAT,
    COMPLEX
};

enum Operaciones {
    SUMA = 1,
    RESTA,
    MULTIPLICACION
};

// Menu
int main() {
    Matriz<int> aInt;
    Matriz<int> bInt;
    Matriz<float> aFloat;
    Matriz<float> bFloat;
    Matriz<std::complex<double>> aComplex;
    Matriz<std::complex<double>> bComplex;
    int tipo = 0;
    int operacion = 0;
    int opcion = 0;
    bool exit = false;

    // Menu de opciones
    while(!exit){
        cout << endl << "///// Calculadora /////" << endl;
        cout << "1. Ingresar el tipo de datos de las matrices" << endl;
        cout << "2. Ingresar tamano y valores de las matrices" << endl;
        cout << "3. Ingresar la operacion que se desea realizar" << endl;
        cout << "4. Generar datos aleatorios para las matrices" << endl;
        cout << "5. Mostrar las matrices ingresadas" << endl;
        cout << "6. Ejecutar la operacion ingresada" << endl;
        cout << "7. Salir del programa" << endl;
        
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion) {
            case TIPODATO:
                cout << endl;
                cout << "Tipos de datos disponibles: " << endl;
                cout << "1. int" << endl;
                cout << "2. float" << endl;
                cout << "3. std::complex" << endl;
                cout << "Ingrese su opcion: ";
                cin >> tipo;
                break;
            case PROPIEDADES:
                cout << endl;
                if (tipo = INT) {
                    aInt.setDimensiones();
                    aInt.llenarMatriz();
                    bInt.setDimensiones();
                    bInt.llenarMatriz();
                } else if (tipo = FLOAT) {
                    aFloat.setDimensiones();
                    aFloat.llenarMatriz();
                    bFloat.setDimensiones();
                    bFloat.llenarMatriz();
                } else if (tipo = COMPLEX) {
                    aComplex.setDimensiones();
                    aComplex.llenarMatriz();
                    aComplex.setDimensiones();
                    aComplex.llenarMatriz();
                } else {
                    cout << endl << "Opcion incorrecta" << endl;
                }
                break;
            case OPERACION:
                cout << endl;
                cout << "Tipos de operaciones disponibles: " << endl;
                cout << "1. Suma" << endl;
                cout << "2. Resta" << endl;
                cout << "3. Multiplicacion" << endl;
                cout << "Ingrese su opcion: ";
                cin >> operacion;
                if (operacion != SUMA && operacion != RESTA && operacion != MULTIPLICACION)
                    cout << endl << "Opcion incorrecta" << endl;
                break;
            case DATOSALEATORIOS:
                cout << endl;
                if (tipo = INT) {
                    aInt.llenarMatrizAleatorio();
                    bInt.llenarMatrizAleatorio();
                } else if (tipo = FLOAT) {
                    aFloat.llenarMatrizAleatorio();
                    bFloat.llenarMatrizAleatorio();
                } else if (tipo = COMPLEX) {
                    aComplex.llenarMatrizAleatorio();
                    aComplex.llenarMatrizAleatorio();
                } else {
                    cout << endl << "Opcion incorrecta" << endl;
                }
                
                break;
            case MOSTRAR:
                cout << endl;
                if (tipo = INT) {
                    cout << "Matriz A: " << endl;
                    aInt.mostrarMatriz();
                    cout << "Matriz B: " << endl;
                    bInt.mostrarMatriz();
                } else if (tipo = FLOAT) {
                    cout << "Matriz A: " << endl;
                    aFloat.mostrarMatriz();
                    cout << "Matriz B: " << endl;
                    bFloat.mostrarMatriz();
                } else if (tipo = COMPLEX) {
                    cout << "Matriz A: " << endl;
                    aComplex.mostrarMatriz();
                    cout << "Matriz B: " << endl;
                    aComplex.mostrarMatriz();
                } else {
                    cout << endl << "Opcion incorrecta" << endl;
                }
                break;
            case EJECUTAR:
                cout << endl;
                if (tipo = INT) {
                    Matriz<int> cInt;
                    if (operacion == SUMA) {
                        cInt = aInt + bInt;
                    } else if (operacion == RESTA) {
                        cInt = aInt - bInt;
                    } else if (operacion == MULTIPLICACION) {
                        cInt = aInt * bInt;
                    } else {
                        cout << endl << "Opcion incorrecta" << endl;
                    }
                    cInt.mostrarMatriz();
                } else if (tipo = FLOAT) {
                    Matriz<float> cFloat;
                    if (operacion = SUMA) {
                        cFloat = aFloat + bFloat;
                    } else if (operacion = RESTA) {
                        cFloat = aFloat - bFloat;
                    } else if (operacion = MULTIPLICACION) {
                        cFloat = aFloat * bFloat;
                    } else {
                        cout << endl << "Opcion incorrecta" << endl;
                    }
                    cFloat.mostrarMatriz();
                } else if (tipo = COMPLEX) {
                    Matriz<std::complex<double>> cComplex;
                    if (operacion = SUMA) {
                        cComplex = aComplex + bComplex;
                    } else if (operacion = RESTA) {
                        cComplex = aComplex - bComplex;
                    } else if (operacion = MULTIPLICACION) {
                        cComplex = aComplex * bComplex;
                    } else {
                        cout << endl << "Opcion incorrecta" << endl;
                    }
                    cComplex.mostrarMatriz();
                };
                break;
            case EXIT:
                cout << endl;
                cout << "Saliendo del programa" << endl;
                exit = true;
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                break;
        };
    
    };
    

    return 0;
}