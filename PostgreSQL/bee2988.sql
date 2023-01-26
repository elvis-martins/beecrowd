with win as (
  select matches.team_1 as time, 3 as pontos from matches where matches.team_1_goals > matches.team_2_goals
  UNION all
  select matches.team_2 as time, 3 as pontos from matches where matches.team_2_goals > matches.team_1_goals
 ),
 lost as (
  select matches.team_1 as time, 0 as pontos from matches where matches.team_1_goals < matches.team_2_goals
  UNION all
  select matches.team_2 as time, 0 as pontos from matches where matches.team_2_goals < matches.team_1_goals
 ),
 draw as (
  select matches.team_1 as time, 1 as pontos from matches where matches.team_1_goals = matches.team_2_goals
  UNION all
  select matches.team_2 as time, 1 as pontos from matches where matches.team_2_goals = matches.team_1_goals
 ),
 t_win as (
   select win.time, count(*) as matches, count(*) as victories, 0 as defeats, 0 as draws, sum(win.pontos) as score
   from win group by win.time
),
t_lost as (
   select lost.time, count(*) as matches, 0 as victories, count(*) as defeats, 0 as draws, sum(lost.pontos) as score
   from lost group by lost.time
),
t_draw as (
   select draw.time, count(*) as matches, 0 as victories, 0 as defeats, count(*) as draws, sum(draw.pontos) as score
   from draw group by draw.time
),
t_union as (
  select * from t_win
  UNION
  select * from t_lost
  UNION
  select * from t_draw
),
final_t as (
  select t_union.time, sum(t_union.matches) as matches, sum(t_union.victories) as victories, 
  sum(t_union.defeats) as defeats,
  sum(t_union.draws) as draws, sum(t_union.score) as score from t_union group by t_union.time
)

select teams.name, final_t.matches, final_t.victories, final_t.defeats,
final_t.draws, final_t.score from teams join final_t on teams.id = final_t.time
order by final_t.score desc
