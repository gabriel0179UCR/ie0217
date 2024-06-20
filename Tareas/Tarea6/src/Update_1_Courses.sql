-- Se actualizan los nombres y creditos de tres cursos
UPDATE Cursos SET Nombre = 'Programacion bajo plataformas abiertas, C++ y Python', Creditos = 2 WHERE CursoID = 7;
UPDATE Cursos SET Nombre = 'Estructuras abstractas de datos y algoritmos para ingeniería, C++ y bases de datos', Creditos = 4 WHERE CursoID = 8;
UPDATE Cursos SET Nombre = 'Transmisión de potencia en la industria', Creditos = 2 WHERE CursoID = 9;

-- Se inserta filas en tabla descripciones de los cursos
INSERT INTO Descripciones (CursoID, Descripcion, Dificultad)
VALUES (7, '', 'Medio'),
	(8, '', 'Medio'),
	(9, '', 'Medio');

-- Se actualiza la descripcion y dificultad
UPDATE Descripciones SET Descripcion = 'ACTUALIZACION', Dificultad = 'Facil' WHERE CursoID = 7;
UPDATE Descripciones SET Descripcion = 'ACTUALIZACION', Dificultad = 'Dificil' WHERE CursoID = 8;
UPDATE Descripciones SET Descripcion = 'ACTUALIZACION', Dificultad = 'Facil' WHERE CursoID = 9;