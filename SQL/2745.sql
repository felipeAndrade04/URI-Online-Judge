SELECT
	name,
  CAST(salary*0.1 AS DECIMAL(16,2))
FROM
	people
WHERE
	salary > 3000