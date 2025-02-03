# Write your MySQL query statement below
SELECT name,bonus FROM Employee as e LEFT JOIN 
Bonus as b
ON e.empId = b.empId
HAVING NOT b.bonus >= 1000 or b.bonus is NULL