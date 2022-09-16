dia1 = input().split(' ')
hora1 = input().split(' : ')
dia2 = input().split(' ')
hora2 = input().split(' : ')

dia = int(dia2[1]) - int(dia1[1])
hora = int(hora2[0]) - int(hora1[0])
minuto = int(hora2[1]) - int(hora1[1])
segundo = int(hora2[2]) - int(hora1[2]) 

if(segundo < 0):
    minuto -=1
    segundo = 60 + segundo
if(minuto < 0):
    hora -= 1
    minuto = 60 + minuto
if(hora < 0):
    dia-=1
    hora = 24 + hora

print('{dia} dia(s)'.format(dia = dia))
print('{hora} hora(s)'.format(hora = hora))
print('{minuto} minuto(s)'.format(minuto = minuto))
print('{segundo} segundo(s)'.format(segundo = segundo))