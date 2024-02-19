# Write your MySQL query statement below
WITH SeatCTE AS (
    SELECT 
        id,
        student,
        ROW_NUMBER() OVER (ORDER BY id) AS row_num
    FROM seat
)

SELECT 
    CASE 
        WHEN s.row_num % 2 = 1 AND s.row_num = (SELECT MAX(row_num) FROM SeatCTE) THEN s.id
        WHEN s.row_num % 2 = 1 THEN LEAD(s.id) OVER (ORDER BY s.id)
        ELSE LAG(s.id) OVER (ORDER BY s.id)
    END AS id,
    student
FROM SeatCTE s
ORDER BY id;