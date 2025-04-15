/* Write a query to output the following
- Find the total outstanding fee of the students for each department
- Group by each department */

select Department, SUM(Fee_outstanding) as fee_outstanding from Student Group By Department;
