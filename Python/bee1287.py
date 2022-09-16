while True:
    try:
        entrada = input()

        if(entrada == ''):
            print('error')
        else:
            entrada = entrada.replace(',','')
            entrada = entrada.replace(' ','')
            entrada = entrada.replace('o','0')
            entrada = entrada.replace('O','0')
            entrada = entrada.replace('l','1')

            if(entrada.isnumeric() == False):
                print('error')
            elif(int(entrada) >= 0 and int(entrada) <= 2147483647):
                print(int(entrada))
            else:
                print('error')
    except EOFError:
        exit()
