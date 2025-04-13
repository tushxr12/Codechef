/* Write a query which outputs the '%Y-%m-%d %H:%M:%S' of 10 days from '2023-04-20 13:40:23'.
   Write a query which outputs the '%d' from '2024-03-04 23:34:20'.*/
   
   select STRFTIME('%Y-%m-%d %H:%M:%S', '2023-04-20 13:40:23', '+10 days');
   select STRFTIME('%d', '2024-03-04 23:34:20');
