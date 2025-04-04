# Write your MySQL query statement below
select 
    query_name,
    round((sum((rating/position))/count(query_name)),2) as quality,
    round(count(
        CASE 
            WHEN rating < 3 THEN 1
            ELSE NULL
        END
    )*100/count(rating),2) as poor_query_percentage
from Queries q
group by query_name;