# Parte Practica

Se creo el juego del ahorcado.

Este posee un menu con 5 opciones.

1. Elegir la dificultad del juego.
2. Iniciar el juego.
3. Agregar palabras al diccionario de palabras.
4. Ver diccionario de palabras.
5. Salir del programa.

La dificultad del juego se compone de 3 opciones:
1. Facil: 7 intentos permitidos.
2. Medio: 5 intentos permitidos.
3. Dificil: 3 intentos permitidos.

La palabra a adivinar se selecciona de forma aleatoria de un diccionario de palabras que se puede visualizar con la opcion 4 o agregar nuevas palabras con la opcion 3.

Para compilar el programa:
```
g++ -o main.exe .\main.cpp .\MenuFunctions.cpp
```

Para ejecutar el programa:
```
.\main.exe
```
# Documentacion
El archivo de documentacion generado con doxygen se encuentra en la ubicacion:
```
.\doxygen_documentation\doxygen_files\html\index.html
```

# Parte Teorica

### 1. ¿Cual es la principal diferencia entre C y C++?
A diferencia de C, C++ es un lenguaje de programación orientado a objectos. 
C++ utiliza las características de C y lo adapta para el manejo programado de objetos.


### 2. Explique el proposito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.
| Comando | Proposito y uso |
| - | - |
| git init   | Inicializar un repositorio nuevo.                                   |
| git add    | Enviar los cambios del Working Directory al Staging/Index.          |
| git commit | Guardar los cambios del Stagin/Index al Local Repository.           |
| git push   | Guardar los cambios del Local Repository al Remote Repository.      |
| git pull   | Descargar los cambios del Remote Repository al Local Repository.    |
| git clone  | Descargar una copia del Remote Repository en un Local Repository.   |
| git branch | Crear una nueva rama diferente a la rama principal del repositorio. |
| git merge  | Combinar dos ramas.                                                 |


### 3. ¿Que es Git y cual es su proposito en el desarrollo de software?
Git es un programa de control de versiones. Este programa permite el manejo eficiente y certero en el desarrollo 
de software para mantener de forma ordenada las versiones y cambios realizados en el proyecto. Entre otros aspectos 
generales, permite la solicitud de revisiones, revertir cambios y compartir código.

### 4. ¿Que es un conflicto de fusion (merge conflict) en Git y como se resuelve?
Un conflicto de fusion (merge conflict) ocurre cuando una persona edita una linea de codigo cuando otra persona esta 
editando el mismo archivo (lineas contrapuestas) o el archivo fue borrado.

Para resolver un conflicto de fusion debido a cambios de lineas contrapuestos, siga las siguientes indicaciones:
1. Abra Git Bash.
2. Navegue en el repositorio de Git local que tiene el conflicto de fusión.
3. Genera una lista de los archivos afectados por el conflicto de fusión.
4. Abra un editor de texto y dirigase al archivo quie tiene conflictos de combinación.
5. Busque el marcador de conflicto "<<<<<<< HEAD" para identificar el origen del conflicto. El marcador "=======" divide los cambios de la otra rama. El marcador ">>>>>>> BRANCH-NAME" indica el final de los cambios de la otra rama.
6. Mantenga unicamente los cambios de su rama, los cambios de otras ramas o realizar un cambio nuevo y elimine los marcadores del punto 5.


Para resolver un conflicto de fusión debido a archivos eliminados, siga las siguientes indicaciones:
1. Abra Git Bash.
2. Navegue en el repositorio de Git local que tiene el conflicto de fusion.
3. Genera una lista de los archivos afectados por el conflicto de fusion.
4. Abra un editor de texto y dirígase al archivo quie tiene conflictos de combinación.
5. Mantenga el archivo eliminado o elimine el archivo.

Referencia: GitHub, https://docs.github.com/es/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-using-the-command-line

### 5. ¿Que es un archivo .gitignore y para que se utiliza?
Un archivo .gitignore es un tipo de archivo utilizado en git para ignorar los cambios en archivos con extensiones específicas. Por ejemplo, en el archivo .gitignore se puede incluir la extensión .exe, entonces al crear o cambiar un archivo .exe, git no lo va a tomar en consideracion como un cambio necesario para enviar al repositorio remoto.

### 6. ¿Que es una solicitud de extraccion (pull request) en GitHub y como se utiliza?
Un pull request, a diferencia de un pit push, es una solicitud de cambios sin la necesidad de modificar una rama del proyecto. Esta solucitud normalmente se envia a revision antes de su incorporacion.

Para utilziar un pull reques se crea una rama secundaria a la principal y se realiza un commit. Seguidamente en la pagina de github, se selecciona la opción de pull request al commit realizado y se asignan los supervisores de los cambios.

### 7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programacion compilado y uno interpretado?
- Proporcione ejemplos de situaciones en las que sería mas optimo utilizar un lenguaje compilado y otras en las que seria mas adecuado un lenguaje interpretado.

El lenguaje de programacion compilado convierte todo el codigo fuente en codigo ejecutable antes de ejecutar el programa. Por otro lado, un lenguaje interpretado procesa el codigo fuente linea por linea mientras ejecuta el programa.

Debido a que el lenguaje compilado genera el ejecutable antes de ejecutar el programa, es más rapido que el lenguaje interpretado.


En el desarrollo web se busca mucho la eficiencia en tiempo de ejecucion del backend de una pagina web, por lo tanto es comunmente utilizado el lenguaje compilado.
En el desarrollo de programas de automatizacion de tareas (como lo es el llenado masivo de checklist) se requiere de gran flexibilidad de programacion, por lo tanto es comunmente utilizado el lenguaje interpretado.

### 8. Explique que es un linker en el contexto de un lenguaje de programacion compilado.
### ¿Cual es su funcion principal y por que es esencial en el proceso de compilacion?
Un linker es la herramienta encargada de combinar todos los archivos en un unico programa ejecutable. La principal funcion es la de tomar los programas, bibliotecas y referencias y combinarlas, modularlas y optimizar en un archivo ejecutable.


### 9. Describa el flujo de trabajo basico en Git para agregar cambios a un repositorio.
1. Se descarga una copia del repositorio remoto en un repositorio local (git clone). 
2. Se crean o se editan archivos. 
3. Se envían los cambios enviar del Working Directory al Staging/Index (git add).
4. Se guardan los cambios del Stagin/Index al repositorio local (git commit).
5. Se guardan los cambios del repositorio local en el repositorio remoto (git push).

Nota: El flujo de trabajo básico en Git no toma en consideración el trabajo o cambios realizados en un branch distinta a la main.

### 10. Defina que significa inicializar y declarar una variable.
Inicializar una variable es asignarle un valor al mismo. Ej:
```c++
variable = 3;
```
Declarar una variable es definir el tipo de dato que va a almacenar. Ej:
```c++
int variable;
```

### 11. ¿Que es la sobrecarga de funciones en C++ y cuales son sus beneficios?
La sobrecarga de funciones es la caracteristica en C++ de definir dos funciones con el mismo nombre, pero con distinto comportamiento. Esto se realiza a partir de los parametros de las funciones y tipo de funcion que deben ser distintos. Ej:
```c++
int function(int v1) {
    // Function body
}
float function(float v2) {
    // Function body
}
```
Entre los beneficiones se realta la reutilizacion de código y la felxibilidad de las funciones para adaptarse a diferentes tipos de datos.


### 12. ¿Que es un puntero y como se utiliza? Explique con un ejemplo de la vida real.
Un puntero es una variable que almacena la direccion de memoria de otra variable. Ej:
```c++
int var = 5;
int* pointvar;

pointvar = &var;

// pointvar apunta a la direccion en memoria de la variable var
// Para acceder al valor de la direccion en memoria almacenada se utiliza *
// *pointvar posee el valor de 5
```
Se puede realizar una analogía de puntero con un restaurante. Cuando una mesa realiza un pedido, el mesero anota el numero de mesa (direccion a la que apunta el puntero) con las ordenes de los comensales (valor almacenado en la direccion que apunta el puntero). Los concineros mediante el puntero va a visualizar las ordenes y separarlo conforme a la direccion en memooria, para que cuando el mesero tenga que entregar la comida, visualiza el puntero y no las rdenes.

### 13. ¿Que es un branch (rama) en Git y como se utiliza?
Un branch es una copia secundaria del repositorio, la copia principal se llama main. En un branch se realizan cambios y permite separar por subproyectos en el manejo del desarrollo software.
Entre las funcionalidades principales se encuentra:
| Comando | Proposito y uso |
| - | - |
| git branch   | Se crea un nuevo branch.   |
| git checkout | Se cambia al nuevo branch. |
| git merge    | Se combinan dos branch.    |


### 14. ¿Cual es la principal diferencia entre un bucle do-while y un bucle while?
Un bucle while inicia al cumplir una condicion especificada (mínimo realiza cero interaciones). En cambio, un bucle do-while realiza una iteracion y luego revisa si se cumple la condicion especificada para realizar otra iteracion (minimo realiza una iteracion).

### 15. Explique por que es util y comun dividir el codigo en archivos .hpp, .cpp y main.cpp en C++. Describa el prototipo específico de cada tipo de archivo.
Dividir el codigo entre los archivos .hpp, .cpp y main.cpp permite una mejor distribucion y organizacion de las dependencias, librerias y funciones.

Prototipos:

```c++
// .hpp
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Definicion de los encabezados de cada una de las funciones

#endif // FUNCIONES_HPP
```

```c++
// .cpp
void funct1(const var1) {
    // Cuerpo de funcion
}
void funct2(const var2) {
    // Cuerpo de funcion
}
```
```c++
// main.cpp

// Includes

int main() {
    // Cuerpo
    return 0;
}
```

### 16. ¿Donde y como se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.
Las variables en C++ se pueden guardar de forma local o global, dependiendo de la funcion necesaria. La variables locales existen solo dentro de un ambito, ya se una funcion, una clase, entre otros. Por otro lado, las variables globales existen en todo el codigo y se pueden utilizar indiferentemente de donde se realice el llamado.
```c++
int var1 = 10; // Variable global
int main() {
    int var2 = 5; // Variable local
}
```

### 17. ¿Cual es la diferencia entre pasar parametros por valor, por referencia y por puntero?
El parametro por valor crean una copia de la variable y no puede modificar la variable original.
El parametro por referencia crea un alias a la variable y se puede modificar la variable original mediante el alias.
El parametro por puntero pasa la direccion en memoria de la variable y se puede modificar la variable original meidante la direccion.

### 18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a que valor o direccion apunta inicialmente? Describa cómo seria la forma de acceder a todos los datos de ese arreglo mediante el puntero.
Si el arreglo esta inicializado, el puntero apunta inicialmente a la direccion del primer valor del arreglo. Para acceder a todos los datos del arreglo mediante el puntero se puede realizar un recorrido donde el puntero suma 1 por cada entrada del arreglo. Ej:

```c++
int var1[] = {1, 2, 3};
int* puntvar1 = var1;
// puntvar1 apunta a la dirección en memoria del valor 1. *puntvar1 = 1
puntvar1++;
// puntvar1 apunta a la dirección en memoria del valor 2. *puntvar1 = 2
puntvar1++;
// puntvar1 apunta a la dirección en memoria del valor 3. *puntvar1 = 3
```


### 19. Explique para que son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.
Los punteros dobles son empleados para almacenar la direccion en memoria de otro puntero. Los punteros dobles son necesarios al crear matrices dinamicas porque se requiere de guardar la direccion del primer elemento de la matriz. También son utilizados para pasar matrices como argumentos de funciones.

### 20. ¿Para que se utiliza la directiva #ifndef?
La directiva #ifndef se utiliza para comprobar si no se ha definido un macro. Si un macro no está definido, se compilan las lineas que siguen de la directiva.

### 21. ¿Que es el puntero this en C++?
El puntero this es una variable de una estructura o una unión que hace referencia al objeto de la clase dentro de una clase. Este permite acceder a sus atributos y metodos dentro de la clase.

### 22. ¿Cual es la diferencia entre un arreglo y una lista en C++?
Un arreglo es una estructura de datos estatica que no se puede modificar una vez se haya creado. Ej:
```c++
int var[3] = {1, 2, 3};
```
Una lista es una estructura de datos dinámica que se puede modificar una vez se haya creado. Ej:
```c++
list<int> var;
var.push_back(1);
```

### 23. ¿Investigue que es un memory leak?

Un memory leak es la memoria que se utilizo y se dejo de utilizar, pero no fue liberada. Estos espacios en memoria no se pueden liberar porque el programa ya no contiene los punteros a estos espacios. La principal causa de un memory leak es el espacio en memoria no liberado de las variables estaticas de forma manual.

Referencia: A.Hicken, Finding a Memory Leak in C or C++, https://www.parasoft.com/blog/finding-memory-leaks-in-c-or-c/#:~:text=In%20computer%20science%2C%20a%20memory,accessed%20by%20the%20running%20code.
