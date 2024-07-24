nome = input('Digite seu nome: ')
print(f'Olá, {nome}. Este é um sistema criado para você descubrir sua média final!')
nota1 = float(input('Digite sua nota do 1º bimestre: '))
nota2 = float(input('Digite sua nota do 2º bimestre: '))
nota3 = float(input('Digite sua nota do 3º bimestre: '))
nota4 = float(input('Digite sua nota do 4º bimestre: '))
media_final = (nota1 + nota2 + nota3 + nota4)/4
if media_final >= 7:
    print(f'Parabéns, {nome}. Você passou!')
else: 
    print(f'Infelizmente você foi reprovado!')