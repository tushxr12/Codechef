/* Write a query to get the last day of the month in the date '23-06-2024'.
   Write a query to get the date of 15 days from '2024-03-22'..*/
 
 select DATE('2024-06-23', 'start of month', '+1 month', '-1 day');
 select DATE('2024-03-22', '+15 days');
