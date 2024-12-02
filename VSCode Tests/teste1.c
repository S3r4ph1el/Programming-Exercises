#include <stdio.h>

int main()
{

    int t, d, I, bolos_e;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d %d %d", &d, &I, &bolos_e);

        int p_i[I], qi;
        long int maior = 0;

        for (int j = 0; j < I; j++)
        {
            scanf("%d", &p_i[j]);
        }

        int bolo[bolos_e][150];
        long int cont, conta;

        for (int j = 0; j < bolos_e; j++)
        {

            cont = 0, conta = 0;

            scanf("%d", &qi);

            int idx = qi * 2;

            for (int k = 0; k < idx; k++)
            {
                scanf("%d", &bolo[j][k]);
            }

            for (int k = 0; k < idx; k += 2)
            {
                int indice = bolo[j][k];
                conta += p_i[indice] * bolo[j][k + 1];
            }

            int aux = conta;

            while (conta <= d)
            {
                cont++;
                conta += aux;
            }

            if (cont > maior)
            {
                maior = cont;
            }
        }

        printf("%ld\n", maior);
    }

    return 0;
}