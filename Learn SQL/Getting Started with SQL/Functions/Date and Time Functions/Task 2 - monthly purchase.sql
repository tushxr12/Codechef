/* Write a query which does the following
Output the count of highest number of purchases recorded in a month as Purchase_count and the month('%Y-%m') as purchase_month .   */
   select STRFTIME('%Y-%m', Purchase_date) as Purchase_Month, COUNT(*) as Purchase_Count from Purchases group by Purchase_Month ORDER BY Purchase_Count desc LIMIT 1;
