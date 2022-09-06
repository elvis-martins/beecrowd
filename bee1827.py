while True:
    try:
        ordem = int(input())
        indice_1 = int(ordem/3)
        meio_matriz = int(ordem/2)
        ordem_real = ordem-1
        linha = ''

        for i in range(ordem):
            for j in range(ordem):
                if(i == meio_matriz and j == meio_matriz):
                    linha = linha + '4'
                    #print(4, end = '')
                elif((i >= indice_1 and j >= indice_1) and (i <= ordem_real-indice_1 and j <= ordem_real-indice_1)):
                    linha = linha + '1'
                    #print(1, end = '')
                elif(i ==  j):
                    linha = linha + '2'
                    #print(2, end = '')
                elif(i+j == ordem-1):
                    linha = linha + '3'
                    #print(3, end = '')
                else:
                    linha = linha + '0'
                    #print(0, end = '')
            print(linha)
            linha = ''
        print()
    except EOFError:
        exit()