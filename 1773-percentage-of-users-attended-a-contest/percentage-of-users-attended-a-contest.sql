# Write your MySQL query statement below
select contest_id, round(count(contest_id)*100/(select count(*) from Users),2) as percentage
from Register
group by contest_id
order by 2 desc,contest_id;