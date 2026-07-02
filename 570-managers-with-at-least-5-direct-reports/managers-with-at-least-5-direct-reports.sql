SELECT e.name
FROM Employee e
WHERE (
    SELECT COUNT(E.managerId)
    FROM Employee E
    group by managerId
    having e.id = E.managerId
) >= 5;