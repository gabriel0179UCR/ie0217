# Laboratorio 3

## Librería

- Programa que simula una librería.

- Opciones del programa:
1. Agregar un libro: El programa permite agregar un libro solicitando el titulo, autor y genero.
2. Mostrar todos los libros: El programa permite mostrar todos los libros, incluyendo los añadidos.
3. Salir: Se sale del programa.

Las opciones se seleccionan ingresando 1, 2 o 3 respectivamente.

## Ejecucion del programa
Compilar:
```
g++ -o libreria.exe .\principal.cpp .\opcionesMenu.cpp
```
Ejecutar:
```
.\libreria.exe 
```

## Archivos

| Archivo | Funcion |
| - | - |
| principal.cpp | Es el main del programa y posee el menu de consulta y el llamado a las funciones respectivas. |
| variables.hpp | Incluye el enum de opciones del menu y la estructura de los libros. |
| opcionesMenu.hpp | Incluye las declaraciones de las funciones de agregar libro, mostrar libros y liberar memoria. |
| opcionesMenu.cpp | Incluye las definiciones de las funciones de agregar libro, mostrar libros y liberar memoria. |
