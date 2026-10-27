-- ========================================================
-- 3rd Semester Database Management Systems (DBMS)
-- Module 01: DDL & DML Schema Definition
-- ========================================================

CREATE TABLE Department (
    dept_id INT PRIMARY KEY AUTO_INCREMENT,
    dept_name VARCHAR(100) NOT NULL,
    building VARCHAR(50)
);

CREATE TABLE Student (
    student_id INT PRIMARY KEY AUTO_INCREMENT,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    dept_id INT,
    enrollment_date DATE NOT NULL,
    FOREIGN KEY (dept_id) REFERENCES Department(dept_id) ON DELETE SET NULL
);

INSERT INTO Department (dept_name, building) VALUES 
('Computer Science & Engineering', 'Turing Block'),
('Information Technology', 'Babbage Hall');

INSERT INTO Student (first_name, last_name, email, dept_id, enrollment_date) VALUES 
('Bhawesh', 'Dewangan', 'devangbhawesh07@gmail.com', 1, '2025-08-01'),
('Aman', 'Kumar', 'aman.k@univ.edu', 1, '2025-08-01'),
('Priya', 'Sharma', 'priya.s@univ.edu', 2, '2025-08-01');

SELECT * FROM Student;
