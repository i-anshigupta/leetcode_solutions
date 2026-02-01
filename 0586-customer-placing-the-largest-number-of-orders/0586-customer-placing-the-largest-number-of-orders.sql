# Write your MySQL query statement below
SELECT customer_number
FROM Orders 
group by customer_number
order by COUNT(customer_number)desc
limit 1;