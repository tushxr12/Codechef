/* Write the queries to delete data according to the given instructions.
Write all the queries here and RUN/SUBMIT them all at once.*/

delete from Students where address = 'Not Provided';
select student_id, name, address from Students;

delete from Enrollments 
WHERE grade = 'B';

select enrollment_id, student_id,course_id, grade from Enrollments;

delete from Courses where credits < 4;
select * from Courses;

delete from students where email LIKE '%@email.com';

select * from students;
