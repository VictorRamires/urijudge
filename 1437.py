direcoes = ['N', 'L', 'S', 'O']
controle = 0


while 1:
    n = int(input())
    if n == 0:
        break
    entrada = input()
    novo = list(entrada)

    for i in range(n):

        if novo[i] == 'D':
            controle = controle + 1
        if controle > 3:
            controle = 0

        if novo[i] == 'E':
            controle = controle - 1
            if controle < 0:
                controle = 3

    print(f'{direcoes[controle]}')
    controle = 0

