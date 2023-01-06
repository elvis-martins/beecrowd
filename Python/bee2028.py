#caso = quantidade de valores de teste
caso = 1
#Execução termina em EOF
while True:
    try:        
        #N = valor inserido para gerar a sequência, 
        N = int(input())
        #Cálculo de quantidade de números na sequência (quantidade = quantidade de números 
        #presente na sequência)
        quantidade = ((1+N)*N/2)+1
        print("Caso %d: %d numero" % (caso, quantidade)) if N == 0  else print("Caso %d: %d numeros" %  (caso, quantidade))
        print("0", end = '')

        #Imprime a sequência
        for i in range(N):
            for j in range(i+1):
                print(" " + str(i+1), end= '')   
        
        print("\n")
        caso+=1
    except EOFError:
        exit()

