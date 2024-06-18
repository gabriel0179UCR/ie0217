-- Consulta de requisistos de 1 curso 'IE-0445'
SELECT 
	C.Nombre AS 'Curso'
    ,C.Sigla AS 'Sigla'
    ,C2.Nombre AS 'Curso Requisito'
    ,C2.Sigla AS 'Sigla Requisito'
FROM Cursos C 
LEFT JOIN Requisitos R
ON R.CursoID = C.CursoID
LEFT JOIN Cursos C2
ON R.RequisitoCursoID = C2.CursoID
WHERE C.Sigla = 'IE-0445';