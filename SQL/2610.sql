SELECT
  CAST(SUM(price) / COUNT(*) AS DECIMAL(16, 2))
FROM
  products