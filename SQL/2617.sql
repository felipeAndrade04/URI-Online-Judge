SELECT
  products.NAME,
  providers.NAME
FROM
  PRODUCTS,
  PROVIDERS
WHERE
  PROVIDERS.ID = products.id_providers
  AND PROVIDERS.NAME = 'Ajax SA';