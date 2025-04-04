# Write your MySQL query statement below
select P.project_id, round(avg(cast(E.experience_years as decimal))*1.0,2) as average_years
from Project P
join Employee E
on P.employee_id = E.employee_id
group by P.project_id;