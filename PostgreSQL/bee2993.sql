select amount as most_frequent_value from value_table GROUP by amount order by count(*) desc Limit 1