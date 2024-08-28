#include <stdio.h>

int main()
{

    int etapas, e1, e2, s1, s2;

    while (scanf("%d", &etapas) != EOF)
    {
        scanf("%d %d", &e1, &e2);

        int line1[etapas], line2[etapas], trans1[etapas - 1], trans2[etapas - 1];

        for (int i = 0; i < etapas; i++)
        {
            scanf("%d", &line1[i]);
        }

        for (int i = 0; i < etapas; i++)
        {
            scanf("%d", &line2[i]);
        }

        for (int i = 0; i < etapas - 1; i++)
        {
            scanf("%d", &trans1[i]);
        }

        for (int i = 0; i < etapas - 1; i++)
        {
            scanf("%d", &trans2[i]);
        }

        scanf("%d %d", &s1, &s2);

        int dp1[etapas], dp2[etapas];

        dp1[0] = e1 + line1[0];
        dp2[0] = e2 + line2[0];

        for (int i = 1; i < etapas; i++)
        {
            dp1[i] = line1[i] + (dp1[i - 1] < dp2[i - 1] + trans2[i - 1] ? dp1[i - 1] : dp2[i - 1] + trans2[i - 1]);
            dp2[i] = line2[i] + (dp2[i - 1] < dp1[i - 1] + trans1[i - 1] ? dp2[i - 1] : dp1[i - 1] + trans1[i - 1]);
        }

        int menor_tempo = (dp1[etapas - 1] + s1 < dp2[etapas - 1] + s2) ? dp1[etapas - 1] + s1 : dp2[etapas - 1] + s2;

        printf("%d\n", menor_tempo);
    }

    return 0;
}