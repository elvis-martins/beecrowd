select records.temperature, count(*) as number_of_records from records GROUP by records.mark, records.temperature
order by records.mark