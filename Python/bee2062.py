input()
frase = input().split(' ')

for indice, i in enumerate(frase):
    if(len(i) == 3 and (i[0:2] == "OB" or i[0:2] == "UR")):
        frase[indice] = i[0:2] + "I"
resultado = ' '
resultado = resultado.join(frase)
print(resultado)