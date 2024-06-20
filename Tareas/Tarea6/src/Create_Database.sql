-- Create database
CREATE DATABASE Tarea6;
USE Tarea6;

-- Creando tabla Cursos
CREATE TABLE Cursos (
	CursoID INT PRIMARY KEY AUTO_INCREMENT, 
    Sigla VARCHAR(10) UNIQUE KEY, -- Clave candidata
    Nombre VARCHAR(100) UNIQUE KEY, -- Clave candidata
    Semestre VARCHAR(10),
    Creditos INT
);

-- Creando tabla Requisitos
CREATE TABLE Requisitos (
	RequisitoID INT PRIMARY KEY AUTO_INCREMENT,
    CursoID INT, -- Clave foranea
    RequisitoCursoID INT, -- Clave foranea
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID), 
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID)
    ON DELETE CASCADE
);

-- Creando tabla Descripciones
CREATE TABLE Descripciones (
	DescripcionID INT PRIMARY KEY AUTO_INCREMENT,
    CursoID INT, -- Clave foranea
    Descripcion VARCHAR(10000),
    Dificultad ENUM('Fácil', 'Medio', 'Difícil'),
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID)
    ON DELETE CASCADE
);