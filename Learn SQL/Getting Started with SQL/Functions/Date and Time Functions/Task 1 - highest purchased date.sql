/* Write a query which does the following
- Fetch the date on which the highest purchase of all courses recorded */

SELECT 
STRFTIME('%Y-%m-%d',purchase_date) as Highest_Purchased_Date,
COUNT(purchase_id) as Purchased_Count 
FROM
    purchases 
GROUP BY 
    Highest_Purchased_Date 
ORDER BY 
    Purchased_Count desc 
LIMIT 1;
