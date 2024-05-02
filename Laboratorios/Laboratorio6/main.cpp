#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

// Template de clase
template <typename T>
class Stadistics {
    public:
        // Constructor
        Stadistics(const std::vector<T>& data) : data(data){

            // Manejo de excepcion en caso de que la lista este vacia
            if (data.empty()) {
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        // Funcion que calcula la media
        double mean() const {
            T sum = 0;
            for (const T& value : data) {
                sum += value;
            }
            return static_cast<double>(sum) / data.size();
        }

        // Funcion que calcula la desviacion estandar
        double standardDeviation() const {
            double meanValue = mean();
            double sumSquares = 0;

            for (const T& value : data) {
                sumSquares += (value - meanValue) * (value - meanValue);
            }
            return std::sqrt(sumSquares / data.size());
        }

    private:
        std::vector<T> data;
};

int main() {
    try {
        std::vector<int> intData = {1, 2, 3, 4, 5};

        // Instancia de template para vector de enteros
        Stadistics<int> statsInt(intData);

        // Mostrando media y desviacion estandar
        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        /****************************/

        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};

        // Instancia de template para vector de doubles
        Stadistics<double> statsDouble(doubleData);

        // Mostrando media y desviacion estandar
        std::cout << "Media de intData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviacion estandar de intData: " << statsDouble.standardDeviation() << std::endl;

        /****************************/

        // Obligando al salto de la excepcion del vector vacio
        std::vector<int> emptyData;
        Stadistics<int> statsEmpty(emptyData);
    
    // Manejo de excepcion del vector vacio
    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion enxontrada: " << e.what() << std::endl;
    }

    return 0;
}