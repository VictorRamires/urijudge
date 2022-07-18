a = input()
menor = 10000
posicao = 0
x = list(map(int, input().split()))
print(f'Menor valor: {min(x)}')
print(f'Posicao: {x.index(min(x))}')