select products.name, providers.name, products.price FROM products 
join providers on products.id_categories = 
(SELECT categories.id from categories where categories.name = 'Super Luxury')
AND products.id_providers = providers.id AND products.price > 1000

