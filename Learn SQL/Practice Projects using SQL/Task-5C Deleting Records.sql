BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

DELETE FROM Orders
WHERE order_date < '2024-01-20';

/* Update your query here */
DELETE from Customers
WHERE customer_id NOT IN (select DISTINCT customer_id FROM Orders);

select customer_id, name 
FROM Customers;
