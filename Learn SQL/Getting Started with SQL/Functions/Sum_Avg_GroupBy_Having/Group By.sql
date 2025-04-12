 /* Write a query to find the Average of the column 'Payout' across 'Department' from the table 'employee'. The output table should have the average payout of each department.*/

select department,AVG(Payout) as avg_payout from employee GROUP BY department;
