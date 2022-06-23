array = ['Renan', 'Camila', 'Duda', 'Joao']

print(f'{array[0]}:')
print(f'-Bom dia, {array[1]}')

print('\n-> Elementos da lista:')
i = 0
for i in range(len(array)):
    print(f'*{array[i]}')

print('\n-> Array antiga:')
print(array)

array.append('Tabaldi') #coloca na ultima posicao
array.remove('Duda') #remove da array
array.insert(2,'Igor') #insere na posicao informada

print('\n-> Array atual:')
print(array)

#ordenacao
numeros = [-2, 5, -9, 1, 7, 0]
numeros.sort()
print(f'\n-> Numeros ordenados: {numeros}')
numeros.reverse()
print(f'-> Numeros em reverso: {numeros}')

letras = ['B','D','A','E','C']
letras.sort()
print(f'\n-> Letras ordenadas: {letras}')
letras.reverse()
print(f'-> Letras em reverso: {letras}')