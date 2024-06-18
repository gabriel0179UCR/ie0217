SELECT 
	C.Sigla
    ,C.Nombre
    ,C.Semestre
    ,C.Creditos
    ,D.Descripcion
    ,D.Dificultad
FROM Cursos C
LEFT JOIN Descripciones D
ON D.CursoID = C.CursoID