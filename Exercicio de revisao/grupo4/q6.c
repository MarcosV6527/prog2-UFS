#include <stdio.h>


int main()
{

    float matriz[5][3];

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    float mediaColunasPares = 0;
    float medialinhasImpares = 0;

    int cont = 0;

    for(int i = 0; i < 3; i += 2)
    {
        for(int j = 0; j < 5; j++)
        {
            mediaColunasPares += matriz[j][i];
            cont++;
        }
    }

    mediaColunasPares /= (double) cont;

    cont = 0;

    for(int i = 1; i < 5; i += 2)
    {
        for(int j = 0; j < 3; j++)
        {
            medialinhasImpares += matriz[i][j];
            cont++;
        }
    }

    medialinhasImpares /= (double) cont;

    printf("\n===============================================\n");

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Media linhas impares: %.2f\n", medialinhasImpares);
    printf("Media Colunas pares: %.2f\n", mediaColunasPares);






    return 0;
}
