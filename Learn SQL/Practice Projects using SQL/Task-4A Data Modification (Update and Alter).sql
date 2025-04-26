/* Update your query here*/
Update Products
SET price = (price * 1.10)
WHERE category = 'Electronics';

SELECT name,price,stock_quantity from Products LIMIT 1;
