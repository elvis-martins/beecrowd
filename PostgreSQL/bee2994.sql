select doctors.name, ROUND(sum(aux.soma),1) as salary from (
select attendances.id_doctor, attendances.id_work_shift, 
sum(attendances.hours)*150*(work_shifts.bonus/100+1) as soma
from attendances join work_shifts on work_shifts.id = attendances.id_work_shift
GROUP by attendances.id_doctor, attendances.id_work_shift, work_shifts.id order by id_doctor
) as aux
join doctors on doctors.id = aux.id_doctor
GROUP by aux.id_doctor, doctors.name