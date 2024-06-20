-- Insertando dos nuevos cursos
INSERT INTO Cursos(Sigla, Nombre, Semestre, Creditos)
VALUES
    ('IE-9999','Arquitectura de Inteligencia Artificial',2,3),
    ('IE-9998','Desarrollo web',2,3);

-- Insertando los requisitos
INSERT INTO Requisitos(CursoID, RequisitoCursoID)
VALUES
    ((SELECT CursoID FROM Cursos WHERE Sigla = 'IE-9999'),(SELECT CursoID FROM Cursos WHERE Sigla = 'IE-0217')),
    ((SELECT CursoID FROM Cursos WHERE Sigla = 'IE-9998'),(SELECT CursoID FROM Cursos WHERE Sigla = 'IE-0435'));

-- Insertando las descripciones
INSERT INTO Descripciones(CursoID, Descripcion, Dificultad)
VALUES
    ((SELECT CursoID FROM Cursos WHERE Sigla = 'IE-9999'), 'Se desarrolla y estudia la arquitectura del desarrollo de inteligencias artificiales y como realizar Fine Tunning de los mismos.', 'Medio'),
    ((SELECT CursoID FROM Cursos WHERE Sigla = 'IE-9998'), 'Se desarrolla aplicaciones e interfaces web mediante el uso de frameworks como REACT', 'Medio');
