SELECT 
CASE 
    WHEN COUNT(salary)<2 THEN NULL
    ELSE (SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET 1)
    END
AS secondHighestSalary
FROM Employee