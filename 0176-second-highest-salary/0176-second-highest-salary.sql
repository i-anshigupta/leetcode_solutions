# Write your MySQL query statement below
SELECT (
    SELECT DISTINCT salary 
    From Employee
    Order by salary DESC
    LIMIT 1 OFFSET 1
)as SecondHighestSalary;