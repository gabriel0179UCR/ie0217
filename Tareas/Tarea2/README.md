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
Los miembros de un objeto en la OOP son aquellos atributos y métodos clasificados entre los distintos tipos de acceso (mencionados en la pregunta 2); private, protected y public. Por lo tanto, los miembros que existen en la OOP son atributos y metodos privados, protegidos y publicos.

### 14. ¿Que es un memory leak?
Un memory leak es la memoria que se utilizo y se dejo de utilizar, pero no fue liberada. Estos espacios en memoria no se pueden liberar porque el programa ya no contiene los punteros a estos espacios. La principal causa de un memory leak es el espacio en memoria no liberado de las variables estaticas de forma manual.

Referencia: A.Hicken, Finding a Memory Leak in C or C++, https://www.parasoft.com/blog/finding-memory-leaks-in-c-or-c/#:~:text=In%20computer%20science%2C%20a%20memory,accessed%20by%20the%20running%20code.

### 15. ¿Que es y cual es la importancia de la Herencia multinivel, multiple y jerarquica de C+?

 - Herencia multinivel: Tipo de herencia en el cual una clase derivada hereda a otra clase. La clase base A hereda a una clase B y esta clase derivada B hereda a una clase C.
```c++
class A {
    // Estructura de la clase
};

class B : public A {
    // Estructura de la clase
};

class C : public B {
    // Estructura de la clase
};
```
Este tipo de herencia permite la creacion de clases complejas a partir de clases mas basicas. Asi como proporciona la reutilizacion de codigo.

 - Herencia multiple: Tipo de herencia en el cual una clase hereda de dos clases distintas. Las clases A y B heredan a la C.
```c++
class A {
    // Estructura de la clase
};

class B {
    // Estructura de la clase
};

class C : public A, public B {
    // Estructura de la clase
};
```
Este tipo de herencia permite la combinacion de atributos y metodos de clases distintas reutilizando codigo.

 - Herencia jerarquica: Tipo de herencia en el cual dos o mas clases derivan de una misma clase en comun. La clase base A hereda a la clase B y C.
```c++
class A {
    // Estructura de la clase
};

class B : public A {
    // Estructura de la clase
};

class C : public A {
    // Estructura de la clase
};
```
Este tipo de herencia permite la caracterizacion global de objetos y, a partir de estos, caracterizarlos de forma especifica mediante nuevas clases.

### 16. ¿Que es la composicion y como se implementa en C++?
La composicion, al igual que la herencia, busca derivar propiedades de las clases a nuevas clases. La principal diferencia respecto a la herencia es que no se especifica explicitamente que se esta utilizando la composicion. La composicion se implementa de la siguiente forma:

```c++
class claseA {
    // Estructura de la clase
};

class claseB {
    // Estructura de la clase B
    claseA obj;
};
```
En el ejemplo anterior, al declarar un objeto obj de la clase claseA dentro de la clase claseB, esta adquiere por composicion los atributos y metodos de la claseA.


### 17. ¿Que es la sobreescritura de funciones en C++ y cuando es bueno usarla?
La sobreescritura de funciones ocurre cuando al heredar una clase, la nueva clase cambia una de las funciones de la clase padre. Ej:
```c++
class A {
    public:
        void func() {
            // Estructura A
        }
};

class B : public A {
    public:
        void func() {
            // Estructura B
        }
}
```
En el ejemplo anterior, la clase B sobreescribe la funcion func con la Estructura B en lugar de la Estructura A. La sobreescrituran de funciones es bueno utilizarla cuando las clases heredadas poseen un comportamiento distinto a la clase padre al ser mas espefificas.

### 18. ¿Que es un metodo y un atributo y cual es la diferencia entre ellos?
Un metodo es una accion que realiza un objeto de una clase y un atributo es una propiedad de un objeto de una clase. Ej:
```c++
class A {
    public:
        // Atributo
        int a;

        // Metodo
        void b() {
            // Accion
        }
}
```
En el ejemplo anterior se muestra que un atributo es una variable que describe a la clase y el metodo es una accion que la clase realiza.

### 19. ¿Que es el constructor y el destructor en una clase?
El contructor se encarga de inicializar una clase con la plantilla de atributos y metodos que posee. Por otro lado, el destructor se encarga de borrar la clase y liberar el espacio.

### 20. ¿Que es la sobrecarga de operadores en C++ y como se utiliza?
La sobrecarga de operadores es la caracteristica de la programacion orientada a objetos que permite definir que acciones tomar entre dos o mas objetos al utilizar un operado (por ejemplo al sumar dos objetos). Ej:

```c++
class Number {
    public:
        int var1;
        Number(int n1) : var1(n1) {}

        Number operator+ (const Number &f) {
            return var1 + f.var1;
        }        
};

int main() {
    Number num1(1);
    Number num2(2);

    Number num3 = num1 + num2;

    // num3.var1 = 3

    return 0;
}
```
En el ejemplo anterior se utiliza la connotacion 'NOMBRE_CLASE operatorOPERADOR (const NOMBRE_CLASE &f)' para definir que es lo que se va a realizar con OPERADOR. En el presente ejemplo OPERADOR es la suma y la accion que se especifica realizar es la de sumar los atributos v1 de ambos objetos.