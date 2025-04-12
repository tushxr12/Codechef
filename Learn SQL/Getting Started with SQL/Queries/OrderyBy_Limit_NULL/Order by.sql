/* Write a query based on the following conditions 
Destination is 'Cairo'
Entries are ordered by passenger_name in a descending order
*/


select * From Flights where Destination = 'Cairo' ORDER BY passenger_name DESC;
