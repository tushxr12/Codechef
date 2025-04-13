/*Write a query to output the Courses and their initial payment date.
 order the data with respect to the column First_purchase_date (asc).*/
 
 select Course_name as Course, MIN(Purchase_date) as First_purchase_date from Purchases GROUP BY Course ORDER BY First_purchase_date;
