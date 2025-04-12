/* The query given below is incorrect. Debug this query to solve the problem */

select distinct(customer_name)
from Orders
where (address_pincode = 122001 OR address_pincode = 122002)
and (order_time < 12.30
and apartment_floor >= 3);
