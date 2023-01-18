select CONCAT('Approved: ', students.name), students.grade from students where students.grade >= 7
order by students.grade desc
