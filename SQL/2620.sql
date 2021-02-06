SELECT
  customers.name,
  orders.id
FROM
  customers,
  orders
WHERE
  orders.id_customers = customers.id
  AND orders.orders_date < '2016-07-01';