# Write your MySQL query statement below
select t.id 
from Weather t
join weather p on
datediff(t.recordDate,p.recordDate)=1
where t.temperature>p.temperature;

#DATEDIFF(date1, date2) returns number of days between date1 - date2