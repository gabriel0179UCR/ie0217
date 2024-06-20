-- Consulta de cursos que no son optativos
SELECT * 
FROM Cursos
WHERE Semestre IS NOT NULL AND Semestre != -1;