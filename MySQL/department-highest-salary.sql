# Write your MySQL query statement below
SELECT DeptName AS Department, Name AS Employee, Salary FROM 
(SELECT e.Name,e.Salary,e.DepartmentId,d.Name as DeptName FROM Employee e 
JOIN Department d ON e.DepartmentId=d.Id) AS Dept 
JOIN (SELECT MAX(Salary) as Sal, DepartmentID FROM Employee GROUP BY DepartmentID) 
AS MaxSal ON MaxSal.DepartmentId=Dept.DepartmentId WHERE MaxSal.Sal=Dept.Salary;