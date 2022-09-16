while True:
    try:
        entradas = input().split(' ')
        print(abs(int(entradas[1]) - int(entradas[0])))
    except EOFError:
        exit()