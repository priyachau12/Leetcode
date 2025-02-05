# Write your MySQL query statement below
# Write your MySQL query statement below

-- SELECT product_id,year as first_year,quantity, price
-- FROM Sales 
-- where(product_id,year) IN
-- (select product_id,min(year) from sales)
-- GROUP BY product_id;

select product_id,year as first_year, quantity, price
from sales
where(product_id,year) IN
(select product_id,min(year) from sales
group by product_id)