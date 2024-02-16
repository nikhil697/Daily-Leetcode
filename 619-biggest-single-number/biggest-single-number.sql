# Write your MySQL query statement below
SELECT MAX(num) AS num
FROM (
    SELECT num, COUNT(*) AS occurrence
    FROM MyNumbers
    GROUP BY num
    HAVING occurrence = 1
) AS unique_numbers_with_occurrence_one;

# select max(num) as num from(select num,count(*) from MyNumbers group  by num order by count(*) asc, num desc limit 1) as num_1;