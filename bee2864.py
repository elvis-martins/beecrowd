vezes = int(input())

for i in range(vezes):
    entrada = input().split(' ')
    entrada = [int(valor) for valor in entrada]
    a , b , c = entrada[0], entrada[1], entrada[2]
    x_meio = -b/(2*a)
    y = a*pow(x_meio,2)+b*x_meio+c

    print('{:.2f}'.format(y))