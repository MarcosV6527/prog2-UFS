#include <stdio.h>


int main()
{

    FILE * entrada;
    FILE * saida;


    entrada = fopen("in.txt", "r");

    if(entrada == NULL) {
        entrada = fopen("in.txt", "w");

        if(entrada == NULL) {
            printf("Infelizmente o arquivo não pode ser criado, lamentavel\n");
            return 0;
        }

        fprintf(entrada, "3 4 5\n");
        if(fclose(entrada)){
            printf("Infelizmente ocorreu um erro desconhecido, lamentavel\n");
            return 0;
        }
    }
    entrada = fopen("in.txt", "r");
    saida = fopen("out.txt", "w");

    if(saida == NULL) {
        printf("Infelizmente ocorreu um erro desconhecido, lamentavel\n");
        fclose(saida);
        fclose(entrada);
        return 0;
    }


    int num1, num2, num3;

    fscanf(entrada , "%d %d %d\n" , &num1, &num2, &num3);

    fprintf(saida, "A soma dos primeiros \n");
    fprintf(saida, "3 números em \n");
    fprintf(saida, "in.txt é %d\n", num1 + num2 + num3);

    if(fclose(entrada)){
        printf("O arquivo de entrada n pode ser fechado\n");
    }

    if(fclose(saida)){
        printf("O arquivo de saida nao pode ser fechado\n");
    }



    return 0;
}
