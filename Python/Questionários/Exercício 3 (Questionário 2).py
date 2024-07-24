def estilo(S, N, M):
    S = str(S)
    N = int(N)
    M = str(M)
    mensagem = (S * N) + M + (S * N)
    print(f'{mensagem}')