/* Update your query here*/
UPDATE Customers 
SET new_address = null
WHERE new_address = 'Unknown';

select customer_id, name, new_address FROM Customers LIMIT 3;
