notas = [2, 5, 10, 20, 50, 100]
soma_possiveis_notas = []
for i in notas:
    for j in notas:
        soma_possiveis_notas.append(i+j)

while True:
    entradas = input().split(' ')
    if(entradas[0] == entradas[1] == '0'):
        exit()
    else:
        entradas = [int(valor) for valor in entradas]
        troco = entradas[1] - entradas[0]
        if(troco in soma_possiveis_notas):
            print("possible")
        else:
            print("impossible")