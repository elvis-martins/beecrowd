select products.id, products.name from products where products.id_categories in
(select categories.id from categories where categories.name like 'super%')