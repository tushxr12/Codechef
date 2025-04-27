/* Update your query here*/
ALTER table customers
ADD new_address TEXT default "Unknown";

select name, address, new_address from Customers limit 1;
