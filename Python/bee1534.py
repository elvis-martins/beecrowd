while True:
    try:
        ordem = int(input())
        linha = ''
        for i in range(ordem):
            for j in range(ordem):
                if(i + j == ordem - 1):
                    linha += '2'
                elif(i == j):
                    linha += '1'
                else:
                    linha += '3'
            print(linha)
            linha = ''
    except EOFError:
        exit()