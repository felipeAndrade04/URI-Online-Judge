SELECT
  movies.id,
  name
FROM
  movies, prices
WHERE
  movies.id_prices = prices.id
  AND prices.value < 2;