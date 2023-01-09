SELECT movies.id, movies.name from movies join prices on prices.value < 2.00 
and movies.id_prices = prices.id