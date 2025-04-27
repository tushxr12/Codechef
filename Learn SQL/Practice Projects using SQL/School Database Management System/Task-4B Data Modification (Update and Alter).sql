/* Write your query here */
ALTER table Students
ADD scholarship TEXT DEFAULT "None";

select student_id,name,scholarship from Students LIMIT 1;
