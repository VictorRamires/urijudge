num = int(input())
numfinal = 0
numinicio = 0
digito = 0

for i in range(num):
    a = input()
    numfinal = int(a[2])
    numinicio = int(a[0])
    digito = a[1]
    result = 0

    if numfinal == numinicio:
        result = numinicio * numfinal
        print(f'{result}')
    elif 'a' <= digito <= "z":
        result = numinicio + numfinal
        print(f'{result}')
    elif 'A' <= digito <= "Z":
        result = numfinal - numinicio
        print(f'{result}')
