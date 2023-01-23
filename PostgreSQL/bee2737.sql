select name, customers_number from (

select lawyers.name, lawyers.customers_number, 1 as filter from lawyers where lawyers.customers_number = 
(select MAX(lawyers.customers_number) from lawyers)
union
select lawyers.name, lawyers.customers_number, 2 as filter from lawyers where lawyers.customers_number = 
(select Min(lawyers.customers_number) from lawyers)
UNION
select 'Average', cast(avg(lawyers.customers_number) as INTEGER), 3 as filter from lawyers
order by filter) as tabela