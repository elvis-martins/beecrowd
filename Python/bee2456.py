entrada = input()

controle = [int(valor) for valor in entrada.split(' ')]
controle.sort()
reverso = [valor for valor in controle]
reverso.reverse()

reverso = [str(valor) for valor in reverso]
controle = [str(valor) for valor in controle]

controle_str = ' '
controle_str = controle_str.join(controle)
reverso_str = ' '
reverso_str = reverso_str.join(reverso)

if(entrada == controle_str):
    print('C')
elif(entrada == reverso_str):
    print('D')
else:
    print('N')
