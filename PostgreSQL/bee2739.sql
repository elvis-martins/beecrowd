select loan.name, cast(extract(day from loan.payday) as INTEGER) as day from loan