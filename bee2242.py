riso = input()

vogais = ['a', 'e', 'i', 'o', 'u']

risos = riso
riso = list(riso)
risos = list(risos)

for i in riso:
    if(i not in vogais):
        risos.remove(i)

esq_dir = ''
esq_dir = esq_dir.join(risos)

dir_esq = ''
risos.reverse()

dir_esq = dir_esq.join(risos)

if(dir_esq == esq_dir):
    print('S')
else:
    print('N')