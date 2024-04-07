# Tarea 2

## Parte Practica


## Parte Teorica

### 1. ¿Que es la programacion orientada a objetos y cuales son sus principales principios?
La programacion orientada a objetos es un paradigma de la programacion que busca resolver problemas mediante objetos que tienen caracteristicas (atributos) y comportamientos (metodos).

Principios:
 - **Encapsulacion**: Las caracteristicas (atributos) y comportamientos (metodos) de un objeto se mantienen agrupados, ocultando los detalles del objeto.
 - **Abstraccion**: Definicion de caracteristicas y comportamientos de los objetos.
 - **Herencia**: Un objeto puede heredar las caracteristicas y comportamientos de otro.
 - **Polimorfismo**: Diferentes objetos responden al mismo mensaje de distinta forma.

### 2. Explique el concepto de ocultamiento de datos y como se logra en C++.
El ocultamiento de datos se define como el nivel de acceso que se poseen a los atributos y metodos de una clase. En C++ existen tres tipos de acceso; private, protected y public.

| Tipo de acceso | Misma clase | Clase derivada | Fuera de la clase |
| - | - | - | - |
| private | Si | No | No |
| protected | Si | Si | No | 
| public | Si | Si | Si |

En la tabla anterior se aprecia el nivel de acceso por cada tipo de acceso. El acceso de datos private permite unicamente acceder a los datos en la misma clase. El acceso de datos protected permite acceder a los datos en la misma clase y en las clases derivadas producto de al herencia. Por ultimo, el acceso de datos public permite acceder a los datos de la misma clase, las clases derivadas y fuera de la clase.

### 3. ¿Cual es la diferencia entre una clase y un objeto en C++?
Una clase define la estructura y comportamiento de los objetos. Por otro lado, un objeto especifica los valores y caracteristicas de una clase, es una instancia de una clase.

### 4. ¿Que es el polimorfismo y como se logra en C++?
El polimorfismo es uno de los principios de la programacion orientada a objetos y es la cualidad de que diferentes objetos respondan al mismo mensaje de distinta forma.

En C++ se puede aplicar el poliformismo de distintas formas. Una forma de aplicar el poliformismo en C++ es mediante la sobrecarga de funciones.

Sobrecarga de funciones:
```c++
void func(int i) {
    std::cout << "Int:" << i << std::endl;
}
void func(double i) {
    std::cout << "Double:" << i << std::endl;
}
```
En el ejemplo anterior, si al entrada a la funcion **func** es un entero va a utilizar la primera funcion. En cambio, si la entrada a la funcion es un double va a utilizar la segunda funcion.

### 5. ¿Que significa el termino encapsulamiento en el contexto de la OOP?
El encapsulamiento es uno de los principios de la programacion orientada a objetos y se refiere a la agrupacion de atributos y metodos de los objetos en clases.

### 6. ¿Cual es el proposito del constructor y el destructor en una clase de C++?
El contructor se encarga de inicializar una clase con la plantilla de atributos y metodos que posee. Por otro lado, el destructor se encarga de borrar la clase y liberar el espacio.

### 7. ¿Investigue como se define una clase abstracta en C++ y cual es su funcion?
La funcion de una clase abstracta es de ser una clase base para las clases heredadas. Los metodos se tienen que sobreescribir en las clases heredadas. Se define de la siguiente forma:

```c++
class CLASS1 {
    public:
        virtual void func1() = 0;
};
```

### 8. ¿Investigue que es un constructor de copia y para que se utiliza en C++?
El constructor de copia es una funcion interna de una clase que toma en consideracion cuando se crea un nuevo objeto de la clase y se le ingresa como parametro otro objeto. El contructor de copia se utiliza para copiar los datos de un objeto a otro. Ej:

```c++
class CLASS1 {
    public:
        // Constructor de copia //
        CLASS1(const CLASS1& other) {
            a1 = other.a1;
            a2 = other.a2;
        }
        //////////////////////////

        CLASS1(int a1, int a2) {
            this->a1 = a1;
            this->a2 = a2;
        }
    private:
        int a1;
        int a2;
};

int main() {
    CLASS1 objectA(1, 2);
    CLASS1 objectB(objectA)

    return 0;
}
```


### 9. ¿Investigue que es el polimorfismo estatico y dinamico en C++ y como se diferencian?
El poliformismo puede ser de dos tipos estatico y dinamico. El poliformismo estatico es cuando el poliformismo se aplica en tiempo de compilacion, a diferencia del poliformismo dinamico que se aplica en tiempo de ejecucion. El polimorfismo estatico se definen con las funciones y plantillas sobrecargadas. El poliformismo dinamico se definen con las funciones virtuales de las clases.

### 10. ¿Que son las clases anidadas y cual es su utilidad en C++?
Las clases anidadas son clases definidas dentro de otras clases. Este tipo de clases se utilizan para encapsular y compartir datos y metodos de la clase principal.

### 11. En el contexto de la programacion orientada a objetos en C++, ¿como se pueden utilizar los punteros para trabajar con objetos y clases? Explique tambien por que los punteros a objetos son utiles en la programacion orientada a objetos.
Un puntero que dirige a un objeto, al extraer su valor, extrar todos los atributos y metodos del objeto. Esto permite modificar el objeto en funciones. Los punteros son utiles en la programacion orientada a objetos principalmente para pasar objetos como argumentos de una funcion o para que una funcion retorne un objeto. 

### 12. ¿Que es una funcion prototipo?
La funcion prototipo es la declaracion de la funcion. Esta funcion incluye el nombre de al funcion, el tipo y los parametros que recibe.

### 13. ¿Explique los diferentes tipos de miembros que existen en la OOP?
### 14. ¿Que es un memory leak?
### 15. ¿Que es y cual es la importancia de la Herencia multinivel, multiple y jerarquica de C+?
### 16. ¿Que es la composicion y como se implementa en C++?
### 17. ¿Que es la sobreescritura de funciones en C++ y cuando es bueno usarla?
### 18. ¿Que es un metodo y un atributo y cual es la diferencia entre ellos?
### 19. ¿Que es el constructor y el destructor en una clase?
### 20. ¿Que es la sobrecarga de operadores en C++ y como se utiliza?

