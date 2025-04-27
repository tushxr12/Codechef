/* Write your query here */
ALTER TABLE Enrollments 
ADD status TEXT default "Active";

SELECT enrollment_id,student_id,course_id, status from Enrollments LIMIT 1;
