# Write your MySQL query statement below
SELECT Email from (SELECT Email, COUNT(Email) as Freq FROM Person GROUP BY EMAIL) AS T where Freq>1;