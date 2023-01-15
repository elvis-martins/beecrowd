select products.name from products where products.id_providers in
(select providers.id from providers where providers.name LIKE 'P%')
and (products.amount > 10 and products.amount < 20)