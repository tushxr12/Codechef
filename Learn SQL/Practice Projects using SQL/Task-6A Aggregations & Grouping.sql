ROLLBACK TO S1;

/* Update your query below this line*/
select SUM(total_amount) as total_revenue FROM Orders;
