#include <cstdio>

int main()
{

    double valor;
    printf("Entre com o valor do produto: ");
    scanf("%lf", &valor);

    if(valor < 100)
    {
        valor += valor * 0.1;
    }
    else
    {
        valor += valor * 0.2;
    }

    printf("Novo valor: %.2lf\n", valor);



    return 0;
}