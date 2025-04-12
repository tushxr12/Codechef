/* Write a query to output the following
- Department and average payout on a single line
- Where total payout of the department is more than 40. */

select Department, AVG(payout) as avg_payout from employee group by department having SUM(payout) > 40;
