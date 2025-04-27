ROLLBACK TO S1;

/* Update your query below this line*/
SELECT strftime('%Y-%m', order_date) AS order_month, COUNT(order_id) as total_orders
FROM Orders
GROUP BY order_month
ORDER BY order_month;
