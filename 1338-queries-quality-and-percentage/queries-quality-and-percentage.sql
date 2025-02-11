# Write your MySQL query statement below
Select query_name,round(AVG(rating/position),2) as quality,round(sum(rating < 3)/count(*)*100,2) as poor_query_percentage
From Queries
GROUP BY query_name