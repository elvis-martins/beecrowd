vezes = int(input())

for i in range(vezes):
    linha1 = input().split(' ')
    linha2 = input().split(' ')
    linha2 = [int(valor) for valor in linha2]
    resultado = sum(linha2)

    if(resultado % 2 == 0):
        print(linha1[int(linha1.index('PAR'))- 1])
    else:
        print(linha1[int(linha1.index('IMPAR'))  - 1])
