/* Update your query here*/
UPDATE Orders
SET Remarks_If_any = NULL
WHERE Remarks_If_any = 'No Remarks';

select order_id, Remarks_If_any from Orders where Remarks_If_any is NULL;
