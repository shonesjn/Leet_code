WITH CTE AS (
    SELECT 
        id,
        num,
        LEAD(id, 1) OVER (ORDER BY id) AS next_id,
        LEAD(num, 1) OVER (ORDER BY id) AS next_num,
        LEAD(id, 2) OVER (ORDER BY id) AS next_next_id,
        LEAD(num, 2) OVER (ORDER BY id) AS next_next_num
    FROM Logs
)
SELECT DISTINCT num AS ConsecutiveNums
FROM CTE
WHERE num = next_num AND num = next_next_num
  AND id = next_id - 1 AND id = next_next_id - 2;