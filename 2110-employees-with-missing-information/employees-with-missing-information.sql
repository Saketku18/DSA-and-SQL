# Write your MySQL query statement below
select employee_id from(
    select employee_id from Employees 
    union
    select employee_id from Salaries 
) as u where employee_id not in
(
    select employee_id from Employees 
    intersect
    select employee_id from Salaries 
) order by employee_id;
