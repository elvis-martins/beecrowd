while True:
    try:
        input()
        entrada = input().split(' ')
        entrada = [int(valor) for valor in entrada]
        velocidade = int(max(entrada))
        if(velocidade < 10):
            print(1)
        elif(velocidade >= 10 and velocidade < 20):
            print(2)
        else:
            print(3)
    except EOFError:
        exit()
