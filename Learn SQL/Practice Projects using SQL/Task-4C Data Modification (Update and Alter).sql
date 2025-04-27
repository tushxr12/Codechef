/* Update your query here*/
UPDATE Products
SET stock_quantity = 0
WHERE stock_quantity = 10;

select * from Products where stock_quantity = 0;
