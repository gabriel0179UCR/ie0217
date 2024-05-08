# Tarea 4

## Documentacion de doxygen en Netlify:


## Parte practica
### Descripcion

### Compilar:
```
g++ -o main.exe .\main.cpp .\HashTable.cpp .\Funciones.cpp .\FuncionesCloud.cpp
```
### Ejecutar:
```
.\main.exe
```
Nota: Los comandos de compilar y ejecutar aplican cuando se situa dentro de la carpeta src.

## Parte teorica

### 1. Templates:
 - 1. **Definicion de Templates**: Explique el concepto de templates en C++ y proporcione un ejemplo simple.
Los templates en C++ son caracteristicas que permiten crear codigo generico de funciones y clases para ser usados con distintos tipos de datos sin la necesidad de escribir codigo para cada tipo de dato. En el siguiente ejemplo se crea una funcion template que realiza una suma y con el template permite sumar distintos tipos de datos.

```c++
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}
```

 - 2. **Sobrecarga de Plantillas**: ¿Como se realiza la sobrecarga de funciones con plantillas en C++?

La sobrecarga de funciones con plantillas en C++ se realiza a partir de una funcion de plantilla y una funcion normal.

```c++
template<class T> 
void f(T x, T y) { 
    cout << "Es plantilla" << endl; 
}

void f(int w, int z) { 
    cout << "No es plantilla" << endl; 
}

int main() {
   f( 1 ,  2 ); // No es plantilla
   f('a', 'b'); // Es plantilla
   f( 1 , 'b'); // No es plantilla
}
```

 - 3. **Plantillas de Clases**: Explique como se pueden utilizar plantillas en la definicion de clases en C++.
Las plantillas en las definiciones de clases permite crear una unica clase y poder trabajar con distintos tipos de datos.
```c++
template <class T>
class className {
    private:
        T var;
        ... .. ...
    public:
        T functionName(T arg);
        ... .. ...
};
```

### 2. Excepciones:
 - 4. **Manejo de Excepciones**: Describa los bloques try, catch y throw y como se utilizan para el manejo de excepciones en C++.
El bloque try menciona el codigo que puede generar una excepcion. El bloque catch menciona el codigo que se encarga de manejar la excepcion. El bloque throw lanza una excepcion cuando se detecta un error.
```c++
try {
    // Codigo que puede generar una excepcion
    throw argument;
} catch (exception) {
    // Codigo que maneja la excepcion
}
```

 - 5. **Excepciones Estandar**: Nombre al menos tres excepciones estandar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrian ser utiles.

```c++
std::invalid_argument // Excepcion estandar que indica un valor erroneo

int b = 0
if (b == 0) {
   throw std::invalid_argument("b es cero");
}
```

```c++
std::bad_alloc // Excepcion estandar que indica que un programa falla al asignar memoria

int* datos = new int[tamano];

if (!datos) {
    throw std::bad_alloc();
}
```

```c++
std::out_of_range // Excepcion estandar que indica que se esta tratando de acceder a un elemento fuera de un contenedor

int buscarElemento(const std::vector<int>& datos, int valor) {
  for (int i = 0; i < datos.size(); ++i) {
    if (datos[i] == valor)
      return i;
  }
  throw std::out_of_range("Elemento fuera de rango");
}
```


 - 6. **Politica de Manejo de Excepciones**: ¿Que es una politica de manejo de excepciones y por que es importante considerarla al diseñar software?
La politica de manejo de excepciones es un conjunto de reglas que se deben seguir para manejar los errores a nivel de codigo que pueden surgir. Es importante seguir una politica de manejo de excepciones debido a que el codigo bajo manejo desprevenido puede llegar a fallar en distintas formas.

 - 7. **Noexcept**: Explica el proposito de la palabra clave noexcept y como se utiliza en C++.
La palabra clave noexcept se utiliza para indicar que una funcion no lanzara excepciones durante su ejecucion.

```c++
void fuctionName(int arg) noexcept;
```

 - 8. Explique la diferencia entre las excepciones **std::logic error** y **std::runtime error**.
La excepcion std::logic error indica errores de logica de programacion. Mientras que std::runtime error indica errores debido a factores externos o condiciones inesperadas.

 - 9. Explique que ocurre cuando una **excepcion no es capturada**.
Cuando una excepcion no es capturada puede conllevar a un comportamiento inesperado del programa o que el programa finalice con un mensaje de error.

### 3. STL (Standard Template Library):
 - 10. **Contenedores STL**: Nombre cinco contenedores diferentes de la STL y explique brevemente en que situaciones seria apropiado usar cada uno.

El contenedor vector se utiliza cuando se requiere eliminar elementos con frecuencia de cualquier parte del contenedor.

El contenedor list se utiliza cuando se requiere de insertar y eliminar elementos al principio o al final del contenedor con frecuencia.

El contenedor queue se utiliza cuando se requiere de procesar elementos en el orden en que se agregaron.

El contenedor arrays se utiliza cuando se conoce el tamano del arreglo de elementos con antelacion.

El contenedor map se utiliza cuando se requiere una asociacion entre claces y valores.

 - 11. **Iteradores en STL**: Explique el concepto de iteradores en la STL y como se utilizan para acceder a elementos en contenedores.
Los iteradores permiten acceder a los elementos de un contenedor en distinto orden (dependiendo del tipo de iterador). En el siguiente ejemplo apunta a un vector en el cual permiote acceder a todos los ejemplos del mismo.

```c++
vector<string>::iterator itr;
```

 - 12. **Algoritmos STL**: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones basicas.

Algoritmo copy: Copia elementos de un rango a otro.
```c++
std::vector<int> origen = {1, 2, 3, 4, 5};
std::vector<int> destino(5);
std::copy(origen.begin(), origen.end(), destino.begin());
```
Algoritmo remove: Elimina elementos especificos de un rango.
```c++
std::vector<int> numeros = {1, 2, 3, 4, 5, 4, 3, 2, 1};
std::vector<int>::iterator it = std::remove(numeros.begin(), numeros.end(), 4);
numeros.erase(it, numeros.end());
```
Algoritmo replace: Reemplaza elementos especificos en un rango.
```c++
std::vector<char> letras = {'a', 'b', 'c', 'a', 'b', 'c'};
std::replace(letras.begin(), letras.end(), 'a', 1);
```
 - 13. **Algoritmos Personalizados**: ¿Como podria utilizar un algoritmo personalizado con la STL?

```c++
struct Comparador {
  bool operator()(int a, int b) const {
    return a > b;
  }
};

int main() {
  std::vector<int> v = {5, 2, 4, 1, 3};
  std::sort(v.begin(), v.end(), Comparador());
  return 0;
}
```