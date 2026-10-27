-- ========================================================
-- Module 02: Relational Joins & Aggregate Queries
-- ========================================================

-- INNER JOIN: Fetch student records with department details
SELECT 
    s.student_id, 
    CONCAT(s.first_name, ' ', s.last_name) AS full_name,
    s.email,
    d.dept_name,
    d.building
FROM Student s
INNER JOIN Department d ON s.dept_id = d.dept_id;

-- AGGREGATE QUERY: Count students per department
SELECT 
    d.dept_name, 
    COUNT(s.student_id) AS total_enrolled
FROM Department d
LEFT JOIN Student s ON d.dept_id = s.dept_id
GROUP BY d.dept_name
HAVING COUNT(s.student_id) >= 1;
