/* Write a query to output the following on separate lines
- Total Payout for the Product department.
- Average Payout for Operations department. */

select SUM(Payout) as product_total_pay from employee where department = 'Product';
select AVG(Payout) as ops_avg_pay from employee where department = 'Operations';
