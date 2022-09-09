while True:
    entrada = input().split(' ')
    if(entrada[0] == entrada[1] == '0'):
        exit()
    
    lista = list(entrada[1])
    while(entrada[0] in lista):
        lista.remove(entrada[0])

    if(len(lista) == 0):
        lista.append('0')

    resultado = ''
    resultado = resultado.join(lista)

    print(int(resultado))
        