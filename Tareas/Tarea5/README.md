# Parte Practica

## Programa que valida el formato de un correo electronico.

- Documentacion en Netlify: https://tarea5b90457.netlify.app/

## Compilacion y ejecucion
- Nota: Para la compilacion y ejecucion se hace uso de un archivo Makefile.

| Commando | Funcion |
| - | - |
| mingw32-make clean | Limpia el directorio de archivos compilados |
| mingw32-make build | Compila el programa |
| mingw32-make run | Ejecuta el programa |
| mingw32-make all | Compila y corre el programa |

## Archivos

| Archivo | Funcion |
| - | - |
| main.cpp | Llamado del programa, contiene el menu |
| ValidarEmail.hpp | Declaracion de la clase ValidadorEmail y sus metodos. |
| ValidadorEmail.cpp | Definicion de la clase ValidadorEmail y sus metodos. |
| RegularExpressions.hpp | Definicion de las expresiones regulares utilizadas. |
| Exceptions.hpp | Definicion de los mensajes para cada excepcion manejada. |

# Parte Teorica - Expresiones regulares
### 1.	¿Que es una expresion regular y cual es su proposito en programacion? 
Patrones utilizados para buscar y manipular cadenas de texto de una manera más flexible y poderosa. Permiten realizar búsquedas de patrones dentro de texto, validar cadenas, realizar sustituciones y mucho más
### 2.	¿Que significan los caracteres especiales . y * en una expresion regular? 
El punto coincide con cualquier carácter, excepto un salto de línea.
El asterisco representa cero o más repeticiones del elemento anterior.
### 3. ¿Como se pueden agrupar subexpresiones en una expresion regular? 
Los parentesis se utilizan para agrupar elementos en subexpresiones.
### 4. ¿Que funcion cumple la barra invertida \ en una expresion regular? 
Se utiliza para buscar un carácter especial de expresión regular como un carácter literal. 
### 5. Explique como se pueden capturar coincidencias usando parentesis en una expresion regular.
La expresion dentro de los parantesis es la que va a ser capturada. Por ejemplo, (ab)+ coincidirá con "ab", "abab", "ababab", etc., y capturará "ab" como grupo coincidente.
### 6. ¿Cual es la diferencia entre \d y \D en una expresion regular? 
La expresion \d va a hacer match con solo digito. Al contrario, la expresion \D va a hacer match con no-digitos. 
### 7. ¿Como se representa una clase de caracteres en una expresion regular?
Una clase de caracteres se representa con los corchetes ([]). La expresion dentro de los corchetes va a representar una clase de caracteres a coincidir.
### 8. ¿Cual es el proposito del modificador $ en una expresion regular? 
Se encarga de hacer match con el ultimo caracter.
### 9. Describa como validar una direccion de correo electronico usando expresiones regulares en C++. 
Una direccion de correo se puede validar usando expresiones regulares al tomar en consideracion el formato que debe de seguir el correo. Por ejemplo, si la extension del correo solo debe tener letras minusculas, se realiza una expresion para que haga match cuando solo se presenten letras minusculas y de esta forma revisar el formato del correo.
### 10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Que tecnicas se pueden aplicar para optimizar una expresion regular compleja, especialmente en contextos donde el tiempo de ejecucion es critico? 
Para poder optimizar una expresion regular compleja la principal mejora es la de simplificar la expresion. En caso de que no se pueda simplificar la expresion, se puede buscar alternativas de aplicacion fuera del uso de expresiones regulares (quitarle peso a la expresion).
### 11. ¿Que es un Makefile y cual es su funcion en un proyecto de C++?
Los Makefile se utilizan para ayudar a decidir qué partes de un programa grande deben volver a compilarse. En la gran mayoría de los casos, se compilan archivos C o C++.
### 12. ¿Cual es la diferencia entre una regla implicita y una regla explicita en un Makefile?
Una regla implicita es una regla que se aplica directamente en el llamado basico del Makefile, mientras que una regla explicita debe ser llamada manualmente.
### 13. Explique el proposito de las macros (variables) en un Makefile. 
Los Makefiles pueden usar variables para almacenar valores que se utilizan en varias partes del archivo. Esto facilita la modificación y personalización del Makefile sin tener que cambiar cada instancia de un valor en todo el archivo
### 14. ¿Que es un objetivo (target) en un Makefile y como se define?
Las reglas son instrucciones que dicen cómo crear un target a partir de un conjunto de archivos fuente. Cada regla consta de tres partes: un target, una lista de dependencias y comandos para construir el target. 
Los targets son los resultados que se desean obtener al ejecutar el Makefile. Por ejemplo, un target podría ser compilar un programa o limpiar archivos generados previamente. Los targets son las reglas que definirás en tu Makefile. 
### 15. ¿Por que es util dividir un proyecto de C++ en multiples archivos fuente y como ayuda el uso de Makefiles en este enfoque?
Para generar un programa mas legible y facil de dar soporte.
### 16. ¿Como se pueden definir dependencias entre los archivos fuente en un Makefile? 
Los comandos son las instrucciones que Make debe seguir para construir un target a partir de sus dependencias. Los comandos deben comenzar con una tabulación (no espacios) y deben estar en la misma línea que la regla.
 
### 17. Explique como se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.
Se puede agregar una condicional dentro del Makefile que dependiendo del sistema operativo utilizado se cambie el formato de las banderas CC, CFLAGS, CXXFLAGS y LDFLAGS.

### 18. ¿Cual es el proposito de los comandos clean y all en un Makefile? 
Clean es un phony target clásico que se utiliza para eliminar archivos generados.
All es un phony que permite ejecutar todo lo que hay en un Makefile, incluyendo los .PHONY.
### 19. Describa como se pueden pasar argumentos desde la linea de comandos a un Makefile. 

### 20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o.
```
output.o: input.cpp
    $(CC) $(CFLAGS) -o $@ $<
```
# Parte Teorica - Makefile
### 1. ¿Que suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?
Suelen contener los tags de los compiladores. Por ejemplo, CC contiene normalmente g++.
### 2. ¿De que se compone una regla en un Makefile?
Una regla se compone del target, la dependencia y el comando a realizar. Posee la siguiente estructura.
```
target: dependency
     commands
```
### 3. Defina que es un target y como se relaciona con sus prerequisitos.
Los targets son los resultados que se desean obtener al ejecutar el Makefile. Por ejemplo, un target podría ser compilar un programa o 
limpiar archivos generados previamente. Los targets son las reglas que definirás en tu Makefile. Estos targets son creados por las reglas.
### 4. ¿Para que se utiliza la bandera-I,-c y-o del compilador gcc?
La bandera -I indica al compilador que busque headers en el directorio especificado. La bandera -c le indica al compilador que compile el archivo fuente a un archivo objetivo. La bandera -o le indica al compilador el archivo que se va a crear a partir de la compilacion.
### 5. ¿Como se definen y se utilizan las variables en un Makefile? ¿Que utilidad tienen?
Una variable se puede definir de la siguiente forma:
```
variable = valor
```
Esto permite hacer el codigo del Makefile mas modular y adaptativo.
### 6. ¿Que utilidad tiene un @ en un Makefile?
Un @ se utiliza para suprimir la salida del comando que se ejecuta.
### 7. ¿Para que se utiliza .PHONY en un Makefile?
El .PHONY permite declarar aquellas reglas que no corresponden a un archivo propiamente.