BEGIN TRANSACTION;
SAVEPOINT S1;
--Savepoint created incase any changes to the the database beyond this point has to be undone in the future.

/* Update your query below this line*/
DELETE from Products
Where stock_quantity = 0;

select product_id, name, stock_quantity from Products;
