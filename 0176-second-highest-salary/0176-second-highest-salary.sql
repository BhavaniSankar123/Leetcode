# Write your MySQL query statement below
SELECT
    max(salary) as SecondHighestsalary
FROM Employee 
WHERE 
salary < (select max(salary) FROM Employee)