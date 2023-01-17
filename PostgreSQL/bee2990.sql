select empregados.cpf, empregados.enome, departamentos.dnome from empregados join departamentos on 
empregados.dnumero = departamentos.dnumero where empregados.cpf not in  
(select trabalha.cpf_emp from trabalha) order by empregados.cpf