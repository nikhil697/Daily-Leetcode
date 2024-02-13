# Write your MySQL query statement below
select d.name as Department,e.name as Employee,e.salary as Salary from Department d
JOIN Employee e ON d.id = e.departmentId
WHERE e.salary = (SELECT MAX(salary) FROM Employee WHERE departmentId = d.id);