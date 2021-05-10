# Write your MySQL query statement below
DELETE FROM Person WHERE Id IN (SELECT * FROM (SELECT (SELECT MIN(Id) from Person p2 where p2.id>p1.id AND p1.Email=p2.Email) FROM Person p1) AS T);