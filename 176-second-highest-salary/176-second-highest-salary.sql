# Write your MySQL query statement below
select max(Salary) as SecondHighestSalary from Employee 
WHERE Salary < (SELECT max(Salary) from Employee ) ;
# order by salary desc limit 1,1;
