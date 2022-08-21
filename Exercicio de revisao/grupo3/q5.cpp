#include <cstdio>

int main()
{
    double nota1;
    double nota2;

    do
    {
        do
        {
            scanf("%lf", &nota1);

            if(nota1 == 50)
                return 0;

        } while (nota1 < 0 || nota1 > 10);

        do
        {
            scanf("%lf", &nota2);
        } while (nota2 < 0 || nota2 > 10);

        printf("Média: %.2lf\n", (nota1 + nota2) / 2);

    } while (1);

    return 0;
}
