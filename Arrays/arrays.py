array = ['Renan', 'Camila', 'Duda', 'Joao']

print(f'{array[0]}:')
print(f'-Bom dia, {array[1]}')

print('\n\n-> Elementos da lista:')
i = 0
for i in range(len(array)):
    print(f'*{array[i]}')