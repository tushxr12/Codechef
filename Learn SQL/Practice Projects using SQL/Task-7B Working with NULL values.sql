UPDATE Customers
SET new_address = NULL
WHERE new_address = 'Unknown';

/* Update your query below this line*/
UPDATE Customers
SET new_address = '23 Walnut Lane'
WHERE customer_id = 10 AND name = 'Henry Adams' And new_address is NULL;

select customer_id,name,email,phone,address,new_address FROM Customers where customer_id=10;
