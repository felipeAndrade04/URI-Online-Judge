SELECT
  products.name
FROM
  products,
  providers
WHERE
  products.amount > 10
  AND products.amount < 20
  AND providers.id = products.id_providers
  AND left(providers.name, 1) = 'P';