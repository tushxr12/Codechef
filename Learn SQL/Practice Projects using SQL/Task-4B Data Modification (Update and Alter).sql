/* Update your query here*/
ALTER TABLE Orders
ADD discount REAL default 0.0;

select order_id, total_amount, discount from Orders limit 1;
