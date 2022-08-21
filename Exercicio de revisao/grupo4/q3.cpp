#include <cstdio>

double calcularMedia(double vetor[], int tamanho)
{
    double media = 0;
    for(int i = 0; i < tamanho; i++)
    {
        media += vetor[i];
    }

    return media / tamanho;
}

int main()
{

    double vetor[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Digite a %d° nota: ", i + 1);
        scanf("%lf", vetor + i);
    }

    double media = calcularMedia(vetor, 5);
    printf("%.2lf\n", media);

    return 0;
}