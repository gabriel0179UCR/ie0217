# Tarea 3

## Parte practica
### Programa que simula un almacenamiento de contactos en la nube.
Opciones del programa:
1. Agregar un contacto.
2. Eliminar un contacto.
3. Imprimir Hash-Table y Listas Enlazadas.
4. Mostrar todos los contactos".
5. Salir del programa".

### Compilar:
```
g++ -o main.exe .\main.cpp .\HashTable.cpp .\Funciones.cpp .\FuncionesCloud.cpp
```
### Ejecutar:
```
.\main.exe
```

## Parte teorica

### 1. ¿Que es un algoritmo y cuales son sus caracteristicas principales?
Conjunto de instrucciones para resolver un problema particular.

Caracteristicas:
 a. La entrada y la salida deben definirse con precision.
 b. Cada paso del algoritmo debe ser claro e inequivoco.
 c. Los algoritmos deberias ser mas eficaces entre muchas formas diferentes de resolver un problema.
 d. Un algoritmo no deberia incluir codigo informatico.

### 2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.
Un algoritmo efinciente es aquel que realiza una tarea en la menor cantida de tiempo y utilizando la menor cantidad de memoria posible. En el caso contrario, un algoritmo ineficiente realiza una tarea en una gran cantidad de tiempo y utilizando una gran cantidad de memoria.

### 3. ¿Que es una estructura de datos y por que son importantes?
Una estructura de datos es un almacenamiento que se utiliza para almacenar y organizar datos. Es importante seleccionar una correcta estructura de datos para lograr la mejor eficiencia.

### 4. Describe las diferencias entre una estructura de datos estatica y una dinamica.
En la estructura de datos estatica la memoria para las estructuras se asigna durante la compilacion. Por otra parte, la estructura de datos dinamica la memoria para las estructuras se asigna durante la ejecucion.

### 5. ¿Que es la memoria dinamica y como se gestiona en lenguajes de programacion como C++, explique las operaciones que se pueden realizar?
La memoria dinamica es la asignacion que se realiza en los espacios de memoria durante la ejecucion. La memoria dinamica se puede utilizar con variables como malloc y realloc.

### 6. ¿Cuales son las ventajas y desventajas de la memoria dinamica en comparacion con la memoria estatica?
La memoria dinamica permite mayor flexibilidad y adaptibilidad del codigo, pero aumenta la complejidad y el riesgo de fugas de la memoria. Por otra parte, la memoria estatica posee un riesgo de fugas de memoria bajo y mayor eficiencia.

### 7. Explique que es un arbol binario y cuales son sus principales caracterısticas.
Es una estructura de datos de arbol en la que cada nodo padre puede tener como maximo dos hijos. Cada nodo de un arbol binario consta de tres elementos: datos, direccion del hijo izquierdo, direccion del hijo derecho.

### 8. ¿Que es una cola (queue) y en que situaciones se utiliza comunmente?
Espacio en memoria que funciona bajo la regla de Primero en entrar, primero en salir. Su principal aplicacion es en aquellos casos en que los datos ingresar por orden de llegada.

### 9. ¿Cual es la diferencia entre una cola queue y una pila (stack)?
La diferencia entre la cola y la pila es en el orden de acceso. La cola sigue la regla de Primero en entrar, primero en salir. La pila sigue la regla de Primero en entrar, ultimo en salir.

### 10. Describe como funciona el algoritmo de insercion (insert) en una tabla hash.
El algoritmo de insercion en una tabla hash se encarga de ingresar un par a la tabla hash y se encarga de asignarle la llave correspondiente.

### 11. ¿Que es la funcion de dispersion (hash function) y por que es importante en las tablas hash?
La funcion de dispersion se encarga de distribuir los datos nuevos en la tabla hash uniformemente con su respectiva indexacion.

### 12. ¿Cual es la complejidad temporal promedio de busqueda en una tabla hash bien implementada?
La complejidad temporal promedio es de O(1), lo cual significa que el tiempo promedio para encontrar un elemento es constante.

### 13. Explica como se realiza la operacion de insercion (push) en una pila (stack).
Para realizar la operacion de insercion en una pila se debe verificar si hay espacio disponible en la memoria. En caso de no haber espacio disponible, se expande. Se almacena el nuevo elemento y se actualiza el tamaño de la pila.

### 14. ¿Cual es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?
Al igual que en la tabla hash, la complejidad temporal promedio es de O(1), lo cual significa que el tiempo promedio para encontrar un elemento es constante.

### 15. Describe como funciona una lista enlazada y cuales son sus ventajas y desventajas.
Una lista enlazada es una lista que posee un elemento que apunta al siguiente elemento de la lista. Esto permite poder tener una relacion entre todos los elemntos, pero requiere de una mayor complejidad para acceder a los elementos del mismo.

### 16. ¿Que es un nodo en una lista enlazada y que contiene?
Un nodo en una lista enlaza es un nodo que apunta al siguiente nodo. Contiene el dato del nodo y la direccion del siguiente nodo.


### 17. ¿Cual es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?
En una lista enlazada simple, un elemento apunta al siguiente. En una lista enlazada doble enlazada, un elemento puede apuntar a uno o dos elementos. 

### 18. ¿Como se realiza la eliminacion (delete) de un nodo en una lista enlazada?
La eliminacion de un nodo de una lista se realiza guardando el estado actual de la lista situado en la posicion actual que se desea eliminar, se elimina el elemento en una variable temporal y se reasigna los valores sin el valor eliminado. 

### 19. Explica como funciona el algoritmo de recorrido (traversal) en un arbol binario.
Recorrido en orden: Primero, todos los nodos en el subárbol izquierdo. Luego, el nodo raíz. Finalmente todos los nodos en el subárbol derecho.
Recorrido de pre-orden: Primero, el nodo raíz. Luego, todos los nodos en el subárbol izquierdo. Finalmente todos los nodos en el subárbol derecho.
Recorrido post-orden: Primero, todos los nodos en el subárbol izquierdo. Luego, todos los nodos en el subárbol derecho. Finalmente, el nodo raíz.

### 20. ¿Cual es la complejidad temporal del recorrido en preorden, en orden y en postorden en un arbol binario balanceado?
Al igual que en la tabla hash, la complejidad temporal promedio es de O(n), en el que n es el numero de nodos en el arbol.

### 21. Explique la diferencia entre la notacion Big O (O) y la notacion Omega () en el analisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.

La notación Big-O representa el límite superior del tiempo de ejecución de un algoritmo. 
Por tanto, proporciona la complejidad del peor de los casos de un algoritmo. 

La notación omega representa el límite inferior del tiempo de ejecución de un algoritmo. 
Por lo tanto, proporciona el mejor caso de complejidad de un algoritmo.