CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN 
 declare off_value int;
 set off_value=N-1;
  RETURN ( 
    SELECT (
        SELECT DISTINCT salary 
        FROM Employee
        ORDER BY salary DESC 
        limit 1 OFFSET  off_value
    ) 
  );
END