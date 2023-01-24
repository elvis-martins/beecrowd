select products.name, aux.price from products join 
(select * from (VAlues ('A', 20.0), ('B', 70.0), ('C', 530.5)) as aux0 (type, price)) as aux (type, price)
on products.type = aux.type
order by products.type, products.id desc