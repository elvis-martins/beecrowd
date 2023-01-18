select life_registry.name, trunc(life_registry.omega*1.618,3) as "The N Factor" from life_registry where 
life_registry.dimensions_id in (select dimensions.id from dimensions where 
                                dimensions.name in ('C875', 'C774')) and
                                life_registry.name like 'Richard%'
                                order by life_registry.omega asc