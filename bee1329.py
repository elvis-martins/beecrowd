while True:

    entrada = input()
    if(entrada == '0'):
        exit()
    else:
        lances = input().split(' ')

        vitorias_maria = lances.count('0')
        print('Mary won {maria} times and John won {joao} times'.format(maria = vitorias_maria,joao =  len(lances)-vitorias_maria))