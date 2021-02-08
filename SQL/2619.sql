SELECT
  products.name,
  providers.name,
  products.price
FROM
  products
  INNER JOIN providers on products.id_providers = providers.id
  INNER JOIN categories on products.id_categories = categories.id
WHERE
  price > 1000
  AND categories.name = 'Super Luxury'