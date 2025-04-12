/*Write 3 separate queries to output the entries for the following
- Count the number of employees in the department 'Sales'.
- Maximum Hourly pay for the department 'Operations'.
- Minimum Hourly pay for the department 'Operations'.

Output the counts on separate lines */


select COUNT(*) as count_sales from employee where department = 'Sales';
select MAX(Hourly_pay) as ops_max_pay from employee where department = 'Operations';
select MIN(Hourly_pay) as ope_min_pay from employee where department = 'Operations';
