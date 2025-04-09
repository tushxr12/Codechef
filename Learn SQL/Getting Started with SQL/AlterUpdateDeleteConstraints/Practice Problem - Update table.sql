/* Write a query to do the following
- Set hourly_pay to 150 for HR employees
- Output the entire table
*/

UPDATE employee SET hourly_pay = 150 where Department = 'Hr';
SELECT * FROM employee;
