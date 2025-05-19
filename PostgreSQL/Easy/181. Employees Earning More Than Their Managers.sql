-- https://leetcode.com/problems/employees-earning-more-than-their-managers --

-- Write your PostgreSQL query statement below
SELECT e1.name AS Employee -- rename column name as Employee
FROM Employee e1
INNER JOIN Employee e2 ON e1.managerId = e2.id -- specifies any e2 value as a manager value
WHERE e1.salary > e2.salary
