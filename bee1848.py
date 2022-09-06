contador = 0
resultado = 0

while(contador < 3):
   
    entrada = input()
    if(entrada == 'caw caw'):
        print('{resultado}'.format(resultado= resultado))
        resultado = 0
        contador+=1
    else:
        lista = list(entrada)
        lista.reverse()
        for i, value in enumerate(lista):
            if(value == '*'):
                resultado += 2**i
