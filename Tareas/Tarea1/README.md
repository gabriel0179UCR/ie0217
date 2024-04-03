
# Parte Teórica

### 1. ¿Cuál es la principal diferencia entre C y C++?
A diferencia de C, C++ es un lenguaje de programación orientado a objectos. 
C++ utiliza las características de C y lo adapta para el manejo programado de objetos.


### 2. Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.
| Comando | Propósito y uso |
| - | - |
| git init   | Inicializar un repositorio nuevo.                                   |
| git add    | Enviar los cambios del Working Directory al Staging/Index.          |
| git commit | Guardar los cambios del Stagin/Index al Local Repository.           |
| git push   | Guardar los cambios del Local Repository al Remote Repository.      |
| git pull   | Descargar los cambios del Remote Repository al Local Repository.    |
| git clone  | Descargar una copia del Remote Repository en un Local Repository.   |
| git branch | Crear una nueva rama diferente a la rama principal del repositorio. |
| git merge  | Combinar dos ramas.                                                 |


### 3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?
Git es un programa de control de versiones. Este programa permite el manejo eficiente y certero en el desarrollo 
de software para mantener de forma ordenada las versiones y cambios realizados en el proyecto. Entre otros aspectos 
generales, permite la solicitud de revisiones, revertir cambios y compartir código.

### 4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?
Un conflicto de fusión (merge conflict) ocurre cuando una persona edita una línea de código cuando otra persona está 
editando el mismo archivo (líneas contrapuestas) o el archivo fue borrado.

Para resolver un conflicto de fusión debido a cambios de líneas contrapuestos, siga las siguientes indicaciones:
1. Abra Git Bash.
2. Navegue en el repositorio de Git local que tiene el conflicto de fusión.
3. Genera una lista de los archivos afectados por el conflicto de fusión.
4. Abra un editor de texto y dirígase al archivo quie tiene conflictos de combinación.
5. Busque el marcador de conflicto "<<<<<<< HEAD" para identificar el origen del conflicto. El marcador "=======" divide los cambios de la otra rama. El marcador ">>>>>>> BRANCH-NAME" indica el final de los cambios de la otra rama.
6. Mantenga únicamente los cambios de su rama, los cambios de otras ramas o realizar un cambio nuevo y elimine los marcadores del punto 5.


Para resolver un conflicto de fusión debido a archivos eliminados, siga las siguientes indicaciones:
1. Abra Git Bash.
2. Navegue en el repositorio de Git local que tiene el conflicto de fusión.
3. Genera una lista de los archivos afectados por el conflicto de fusión.
4. Abra un editor de texto y dirígase al archivo quie tiene conflictos de combinación.
5. Mantenga el archivo eliminado o elimine el archivo.

Referencia: GitHub, https://docs.github.com/es/pull-requests/collaborating-with-pull-requests/addressing-merge-conflicts/resolving-a-merge-conflict-using-the-command-line

### 5. ¿Qué es un archivo .gitignore y para qué se utiliza?
Un archivo .gitignore es un tipo de archivo utilizado en git para ignorar los cambios en archivos con extensiones específicas. Por ejemplo, en el archivo .gitignore se puede incluir la extensión .exe, entonces al crear o cambiar un archivo .exe, git no lo va a tomar en consideración como un cambio necesario para enviar al repositorio remoto.

### 6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?
Un pull request, a diferencia de un pit push, es una solicitud de cambios sin la necesidad de modificar una rama del proyecto. Esta solucitud normalmente se envía a revisión antes de su incorporación.

Para utilziar un pull reques se crea una rama secundaria a la principal y se realiza un commit. Seguidamente en la página de github, se selecciona la opción de pull request al commit realizado y se asignan los supervisores de los cambios.

### 7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?
- Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.

El lenguaje de programación compilado convierte todo el código fuente en código ejecutable antes de ejecutar el programa. Por otro lado, un lenguaje interpretado procesa el código fuente línea por línea mientras ejecuta el programa.

Debido a que el lenguaje compilado genera el ejecutable antes de ejecutar el programa, es más rápido que el lenguaje interpretado.


En el desarrollo web se busca mucho la eficiencia en tiempo de ejecución del backend de una página web, por lo tanto es comunmente utilizado el lenguaje compilado.
En el desarrollo de programas de automatización de tareas (como lo es el llenado masivo de checklist) se requiere de gran flexibilidad de programación, por lo tanto es comunmente utilizado el lenguaje interpretado.

### 8. Explique qué es un linker en el contexto de un lenguaje de programación compilado.
### ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?
Un linker es la herramienta encargada de combinar todos los archivos en un único programa ejecutable. La principal función es la de tomar los programas, bibliotecas y referencias y combinarlas, modularlas y optimizar en un archivo ejecutable.


### 9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.
1. Se descarga una copia del repositorio remoto en un repositorio local (git clone). 
2. Se crean o se editan archivos. 
3. Se envían los cambios enviar del Working Directory al Staging/Index (git add).
4. Se guardan los cambios del Stagin/Index al repositorio local (git commit).
5. Se guardan los cambios del repositorio local en el repositorio remoto (git push).

Nota: El flujo de trabajo básico en Git no toma en consideración el trabajo o cambios realizados en un branch distinta a la main.

### 10. Defina qué significa inicializar y declarar una variable.
Inicializar una variable es asignarle un valor al mismo. Ej:
```c++
variable = 3;
```
Declarar una variable es definir el tipo de dato que va a almacenar. Ej:
```c++
int variable;
```

### 11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
La sobrecarga de funciones es la carácterística en C++ de definir dos funciones con el mismo nombre, pero con distinto comportamiento. Esto se realiza a partir de los parámetros de las funciones y tipo de función que deben ser distintos. Ej:
```c++
int function(int v1) {
    // Function body
}
float function(float v2) {
    // Function body
}
```
Entre los beneficiones se realta la reutilización de código y la felxibilidad de las funciones para adaptarse a diferentes tipos de datos.


### 12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.
Un puntero es una variable que almacena la dirección de memoria de otra variable. Ej:
```c++
int var = 5;
int* pointvar;

pointvar = &var;

// pointvar apunta a la direccion en memoria de la variable var
// Para acceder al valor de la direccion en memoria almacenada se utiliza *
// *pointvar posee el valor de 5
```
Se puede realizar una analogía de puntero con un restaurante. Cuando una mesa realiza un pedido, el mesero anota el número de mesa (dirección a la que apunta el puntero) con las órdenes de los comensales (valor almacenado en la dirección que apunta el puntero). Los concineros mediante el puntero va a visualizar las ordenes y separarlo conforme a la dirección en memoria, para que cuando el mesero tenga que entregar la comida, visualiza el puntero y no las órdenes.

### 13. ¿Qué es un branch (rama) en Git y cómo se utiliza?
Un branch es una copia secundaria del repositorio, la copia principal se llama main. En un branch se realizan cambios y permite separar por subproyectos en el manejo del desarrollo software.
Entre las funcionalidades principales se encuentra:
| Comando | Propósito y uso |
| - | - |
| git branch   | Se crea un nuevo branch.   |
| git checkout | Se cambia al nuevo branch. |
| git merge    | Se combinan dos branch.    |


### 14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
### 15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propóito específico de cada tipo de archivo.
### 16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.
### 17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?
### 18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.
### 19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.
### 20. ¿Para qué se utiliza la directiva #ifndef?
### 21. ¿Qué es el puntero this en C++?
### 22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
### 23. ¿Investigue qué es un memory leak?