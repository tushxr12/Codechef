/* Update your query here */
Update Students
SET address = 'Unknown'
WHERE address = 'Not Provided';

select student_id,name,address FROM Students where address = 'Unknown';
