vezes = int(input())

for i in range(vezes):
    mensagem = list(input())
    for indice,j in enumerate(mensagem):
        if(j.isalpha() == True):
            mensagem[indice] = chr(ord(j)+3)
    metade = (int(len(mensagem)/2))
    mensagem.reverse()
    for indice,j in enumerate(mensagem[metade:]):
        mensagem[indice+metade] = chr (ord(j)-1)
    mensagem_crip =''
    mensagem_crip = mensagem_crip.join(mensagem)
    print(mensagem_crip)