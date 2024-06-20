-- Delete description
DELETE FROM Descripciones WHERE CursoID IN (93, 7, 8);
-- Delete requires
DELETE FROM Requisitos WHERE CursoID IN (93, 7, 8);
-- Delete courses that requires those courses   
DELETE FROM Requisitos WHERE RequisitoCursoID IN (93, 7, 8);
-- Delete courses
DELETE FROM Cursos WHERE CursoID IN (93, 7, 8);