/* **Debug this query** to output the minimum and maximum value of payout, round to 2 decimal places. */


select MIN(round(Payout,2)) as 'min_pay',
    MAX(round(Payout,2)) as 'max_pay'
from employee;

