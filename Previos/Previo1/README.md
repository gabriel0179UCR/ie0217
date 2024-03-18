# Acciones realizadas para el Previo 1

## Clase 1: Archivos Markdown

Instalación de git y clonación de repositorio.

Creación de archivo holaMundo.cpp
 - Compilar archivo y crear ejecutable: g++ -o holaMundo.exe .\holaMundo.cpp
 - Ejecutar el ejecutable: .\holaMundo.exe

 Nota: El ejecutable holaMundo.exe no se va a encontrar en el repositorio en GitHub debido al gitignore.

 - Se realiza cambios en el holaMundo.cpp y se vuelve a compilar y ejecutar.
 - Se revisa el estatus del branch: git status
 - Se crea otroArchivo.cpp. Se compila y ejecuta.
 - Se envía el archivo holaMundo.cpp al Staging/Index: git add .\holaMundo.cpp
 - Se revisa la historia del git: git log
 - Se envía el archivo holaMundo.cpp de Staging/Index al Local Repository: git commit -s -m "Agregando mi primer programa C++"
 - Se envían las actualizaciones del Local Repository al Remote Repository: git push
 - Se revisa las ramas actuales: git branch
 - Se crea una nueva rama: git checkout -b feature1.0
 - Se corrobora que se encuentra en la nueva rama: git branch
 - Se envía la nueva rama al Remporte Repository: git push --set-upstream origin feature1.0
 - Se envía el archivo otroArchivo.cpp al Staging/Index de la rama featrure1.0: git add .\otroArchivo.cpp
 - Se envía el archivo otroArchivo.cpp de Staging/Index al Local Repository de la rama feature1.0: git commit -s -m "Agregando el otroArchivo.cpp"
 - Se envían las actualizaciones del Local Repository al Remote Repository en la rama feature1.0: git push
 - Se realiza el pull request y el merge en GitHub.
 - Se elimina el branch feature1.0 del Remote Repository.
 - Se desplaza al branch principal: git checkout main
 - Se actualiza el main del Local Repository: git pull
 - Se elimina el branch feature1.0 del Local Repository: git branch -D feature1.0
 - Se realizan cambios en el archivo otroArchivo.cpp
 - Se revisan los cambios realizados: git diff
 - Se devuelven los cambios realizados en el archivo otroArchivo.cpp: git checkout otroArchivo.cpp
 - Se realizan cambios en el archivo holaMundo.cpp.
 - Se guardan los cambios realizados: git stash
 - Se devuelven los archivos guardados del stash: git stash pop