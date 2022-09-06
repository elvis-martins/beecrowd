testes = input()

coelhos = []
ratos = []
sapos = []

for i in range(int(testes)):
    entrada = input()
    if(entrada[-1:] == 'C'):
        coelhos.append(int(entrada.split(' ')[0]))
    elif(entrada[-1:] == 'R'):
        ratos.append(int(entrada.split(' ')[0]))
    else:
        sapos.append(int(entrada.split(' ')[0]))

soma_coelhos = sum(coelhos)
soma_sapos = sum(sapos)
soma_ratos = sum(ratos)
total_animais = soma_coelhos + soma_sapos + soma_ratos

print('Total: %s cobaias' % total_animais)
print('Total de coelhos: %s' % soma_coelhos)
print('Total de ratos: %s' % soma_ratos)
print('Total de sapos: %s' % soma_sapos)
print('Percentual de coelhos: {:.2f} %'.format((soma_coelhos/total_animais)*100))
print('Percentual de ratos: {:.2f} %'.format((soma_ratos/total_animais)*100))
print('Percentual de sapos: {:.2f} %'.format((soma_sapos/total_animais)*100))