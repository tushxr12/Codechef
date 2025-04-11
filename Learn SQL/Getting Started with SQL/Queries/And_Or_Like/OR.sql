/*write a query that returns the rows which meet the following conditions
- Either Origin is Mumbai or the Destination is Mumbai */

select * FROM FLights where Origin = 'Mumbai' or Destination = 'Mumbai';
