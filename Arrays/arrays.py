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