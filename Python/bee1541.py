entrada = 1
while(entrada != 0):
    entrada = input()
    if(entrada == '0'):
        exit()
    else:
        medidas = entrada.split(' ')
        medidas = [int(valor) for valor in medidas]
        area = medidas[0]*medidas[1]
        porcentagem = medidas[2]/100
        area_total = area/porcentagem
        lado = int(area_total**0.5)
        print(lado)
    
