select candidate.name, Round((score.math*2+score.specific*3+score.project_plan*5)/10,2) as avg
from candidate join score on candidate.id = score.candidate_id order by avg desc