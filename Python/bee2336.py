modulo = pow(10,9) + 7
potencia = [pow(26,i) for i in range(20)]
while True:
    try:
        entrada = input()[::-1]
        if(len(entrada) > len(potencia)):
            while(len(potencia) < len(entrada)):
                potencia.append(pow(26, len(potencia)))
        resultado = [(ord(entrada[i])-65) * potencia[i] for i in range(len(entrada))]
        print(sum(resultado) % modulo)
    except EOFError:
        exit()