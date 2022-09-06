valor = int(input())

hex = []
catalogo = {
    '10': 'A',
    '11': 'B',
    '12': 'C',
    '13': 'D',
    '14': 'E',
    '15': 'F'
}


while(valor / 16 >= 16):
    hex.append(int(valor % 16))
    valor = valor / 16

hex.append(int(valor % 16))
hex.append(int(valor/16))
hex.reverse()
hex = [str(valor) for valor in hex]
hex = [(catalogo[valor] if valor in catalogo else valor) for valor in hex]
resposta = ''
resposta = resposta.join(hex)
print(resposta  if resposta[0] != '0' else resposta[1:])