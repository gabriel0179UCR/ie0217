#ifndef LIBRO_HPP
#define LIBRO_HPP

// Declaracion de la clase Libro
class Libro {
public:
    // Titulo del libro
    std::string titulo;

    // Autor del libro
    std::string autor;

    // Anio de publicacion del libro
    int anioPublicacion;

    // Constructor del libro
    Libro(std::string t, std::string a, int anio);
    
    // Declaracion de la funcion operator<().
    // Accion a tomar cuando se comparan dos libros
    // de la clase Libro por medio del operador '<'
    bool operator<(const Libro& l) const;
};


#endif // LIBRO_HPP