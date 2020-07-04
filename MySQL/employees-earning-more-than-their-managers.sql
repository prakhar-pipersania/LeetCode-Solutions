# Write your MySQL query statement below
select Employee.Name as Employee from Employee cross join Employee as e where Employee.ManagerId=e.Id and Employee.Salary>e.Salary;
