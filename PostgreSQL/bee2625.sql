select concat(SUBSTRING(natural_person.cpf,1,3),'.', SUBSTRING(natural_person.cpf,4,3),'.',
              SUBSTRING(natural_person.cpf,7,3),'-',SUBSTRING(natural_person.cpf,10,2)) as cpf
              from natural_person