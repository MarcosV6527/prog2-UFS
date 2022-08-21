#include <stdio.h>

int main()
{

    char *path = "exemploES.txt";

    FILE * file = fopen(path, "w");

    if(file != NULL)
    {
        printf("Arquivo aberto com sucesso\n");
    }

    fprintf(file, "Universidade Federal de Sergipe\n");
    fprintf(file, "Departamento de Sistemas de informação\n");

    int a = fclose(file);

    if(!a)
        printf("Arquivo fechado com sucesso\n");


    return 0;
}
