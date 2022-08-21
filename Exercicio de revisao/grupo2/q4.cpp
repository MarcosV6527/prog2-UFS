#include <cstdio>


//Mudar esse valor para testar a versão com double

//#define DOUBLE 1
#define DOUBLE 0

#if DOUBLE

int main()
{

    double f;
    scanf("%lf", &f);

    printf("%.2lf C\n", (f - 32) * (5.0 / 9.0));

    return 0;
}


#else

#include <cstdio>

int main()
{

    int f;
    scanf("%d", &f);

    int c = (f - 32) * (5.0 / 9.0);

    printf("%d C\n",  c);

    return 0;
}

#endif
