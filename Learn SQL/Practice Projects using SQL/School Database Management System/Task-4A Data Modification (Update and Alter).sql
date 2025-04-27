/* Update your query here */
Update Courses
SET credits = credits + 1
WHERE department = 'Science';

select course_name, department, credits from Courses where department = 'Science' LIMIT 1;
