select categories.name, sum(products.amount) from categories join products ON
categories.id = products.id_categories group by categories.name