SELECT  (salary* months) As earnings, COUNT(*)

FROM Employee
GROUP BY earnings
ORDER BY earnings DESC
LIMIT 1;

