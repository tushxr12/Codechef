/* Write a query to do the following
- For each department
- Find the average marks (round to 2 decimal places) of the students 
- Where the average outstanding fee less than 500
 */
 select Department, ROUND(AVG(Marks),2) as avg_marks from Student group by Department having AVG(Fee_Outstanding) < 500
