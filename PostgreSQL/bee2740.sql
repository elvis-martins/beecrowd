select tabela.concat as name from (
(select league.position ,concat('Podium: ', league.team) from league limit 3)
union 
(select league.position, concat('Demoted: ', league.team) from league order by league.position desc limit 2)
  ) as tabela order by tabela.position