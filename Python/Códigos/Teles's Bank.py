nome = input('Digite seu nome: ')
senha = int(input('Digite sua senha: '))
cpf = str(input('Digite seu CPF: '))
print(f'Parabéns {nome}, bem vindo ao sistema de saques do BE (Bando do Enzo).')
print(f'Seu saldo é de 3.000$.')
saldo = 3000

valor_saque = float(input('Informe o valor do saque: '))
diferenca = (saldo - valor_saque)
if saldo > valor_saque:
    print(f'Sacando {valor_saque}$. Aguarde um momento...')
    print(f'Sua conta ainda possui um saldo de {diferenca}$.')
if saldo == valor_saque:
    print(f'Sacando {valor_saque}$. Aguade um momento...')
    print(f'Sua conta não possui mais saldo. Saldo: {diferenca}$.')
if saldo < valor_saque:
    print(f'Saque não efetuado. Conta não possui saldo suficiente.')