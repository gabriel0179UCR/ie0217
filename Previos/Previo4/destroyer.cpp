#include <iostream>

using namespace std;

class Molde {
    public:
        double largo;
        double ancho;
        double alto;

        Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto_p) {
            cout << "Probando si se puede imprimir" << endl;
        }

        ~Molde(){
            cout << "Saludos desde el destructor" << endl;
        }

    double calcularArea(){
        return largo * ancho;
    }
    double calcularVolumen(){
        return largo * ancho * alto;
    }
};

int main(){
    /* Instanciar un objeto llamdo pared basado en la clase Molde. */
    Molde pared(400.5, 20.8, 315.2);

    /* Asignar valores al objeto pared. */
    //pared.largo = 400.5;
    //pared.ancho = 20.8;
    //pared.altura = 315.2;

    /* Calcular y desplejar el area y volumen. */
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}