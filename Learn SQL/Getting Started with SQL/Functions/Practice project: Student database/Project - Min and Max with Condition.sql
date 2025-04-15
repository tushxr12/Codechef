/* Find the Minimum and the Maximum marks scored by the students in the department 'Science'.
Output these marks on separate lines. */

SELECT MIN(Marks) as min_marks from student where department = 'Science';
SELECT MAX(Marks) as max_marks from student where department = 'Science';
