/*Write a query to find the highest and lowest 'Hourly_pay' of the employees from the table 'employee'*/

select MAX(Hourly_pay) as max_pay from employee;
select MIN(Hourly_pay) as min_pay from employee;
