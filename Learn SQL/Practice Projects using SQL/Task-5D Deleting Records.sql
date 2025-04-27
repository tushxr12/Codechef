BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

/* Update your query below this line*/
DELETE from Orders 
WHERE total_amount < 150;

select order_id, customer_id, total_amount FROM Orders;
