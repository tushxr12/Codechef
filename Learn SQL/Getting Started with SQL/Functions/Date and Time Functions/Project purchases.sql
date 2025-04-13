/* Write a query which does the following
- Fetch the month of the first purchase of the course Cpp. */

   select STRFTIME('%m', Purchase_date) as Purchased_Month from Purchases where Course_name = 'cpp' ORDER BY Purchase_date LIMIT 1;
