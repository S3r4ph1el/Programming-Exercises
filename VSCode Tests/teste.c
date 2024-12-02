#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    char sobrenome[45];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        int cont = 0, naoehFacil = 0;

        scanf("%s", sobrenome);

        int len = strlen(sobrenome);

        for (int j = 0; j < len; j++)
        {

            if (sobrenome[j] != 'a' && sobrenome[j] != 'e' && sobrenome[j] != 'i' && sobrenome[j] != 'o' && sobrenome[j] != 'u' && sobrenome[j] != 'A' && sobrenome[j] != 'E' && sobrenome[j] != 'I' && sobrenome[j] != 'O' && sobrenome[j] != 'U')
            {
                cont++;
                if (cont == 3)
                {
                    naoehFacil = 1;
                    break;
                }
            }
            else
            {
                cont = 0;
            }
        }

        if (naoehFacil)
        {
            printf("%s nao eh facil\n", sobrenome);
        }
        else
        {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}