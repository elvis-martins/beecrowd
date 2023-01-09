select products.name, providers.name, categories.name from products join providers on 
products.id_providers = (Select providers.id from providers where providers.name like 'Sansul SA')
and products.id_providers = providers.id
join categories on products.id_categories = (select categories.id from categories WHERE
                                             categories.name = 'Imported')
                                             and products.id_categories = categories.id