# Acciones realizadas para el Previo 1

## Clase 1: Archivos Markdown

- Instalación de git y clonación de repositorio.

### Creación de archivo holaMundo.cpp
| # de paso | Acción | Comando |
|---|---|---|
| 1 | Se compila el archivo holaMundo.cpp y se crea el ejecutable | g++ -o holaMundo.exe .\holaMundo.cpp |
| 2 | Se ejecuta el .exe | .\holaMundo.exe |

 Nota: El ejecutable holaMundo.exe no se va a encontrar en el repositorio en GitHub debido al gitignore.

### Envío de cambios al Remote Repository
| # de paso | Acción | Comando |
|---|---|---|
| 1 | Se realiza cambios en el holaMundo.cpp | - |
| 2 | Se revisa el estatus del branch. | git status |
| 3 | Se crea otroArchivo.cpp. | - |
| 4 | Se envía el archivo holaMundo.cpp al Staging/Index | git add .\holaMundo.cpp |
| 5 | Se revisa la historia del git | git log |
| 6 | Se envía el archivo holaMundo.cpp de Staging/Index al Local Repository | git commit -s -m "Agregando mi primer programa C++" |
| 7 | Se envían las actualizaciones del Local Repository al Remote Repository | git push |


### Cambios en ramas del repositorio
| # de paso | Acción | Comando |
|---|---|---|
| 1 | Se revisa las ramas actuales | git branch |
| 2 | Se crea una nueva rama | git checkout -b feature1.0 |
| 3 | Se corrobora que se encuentra en la nueva rama | git branch |
| 4 | Se envía la nueva rama al Remporte Repository | git push --set-upstream origin feature1.0 |
| 5 | Se envía el archivo otroArchivo.cpp al Staging/Index de la rama featrure1.0 | git add .\otroArchivo.cpp |
| 6 | Se envía el archivo otroArchivo.cpp de Staging/Index al Local Repository de la rama feature1.0 | git commit -s -m "Agregando el otroArchivo.cpp" |
| 7 | Se envían las actualizaciones del Local Repository al Remote Repository en la rama feature1.0 | git push |
| 8 | Se realiza el pull request y el merge en GitHub. | - |
| 9 | Se elimina el branch feature1.0 del Remote Repository. | - |
| 10 | Se desplaza al branch principal | git checkout main |
| 11 | Se actualiza el main del Local Repository | git pull |
| 12 | Se elimina el branch feature1.0 del Local Repository | git branch -D feature1.0 |
| 13 | Se realizan cambios en el archivo otroArchivo.cpp | - |
| 14 | Se revisan los cambios realizados | git diff |
| 15 | Se devuelven los cambios realizados en el archivo otroArchivo.cpp | git checkout otroArchivo.cpp |

### Guardado de cambios temporales
| # de paso | Acción | Comando |
|---|---|---|
| 1 | Se realizan cambios en el archivo holaMundo.cpp. | - |
| 2 | Se guardan los cambios realizados | git stash |
| 3 | Se devuelven los archivos guardados del stash | git stash pop |
