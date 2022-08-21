#include <stdio.h>

void criarArquivo(const char * path)
{
    FILE * file = fopen(path, "w");

    for(int i = 0; i < 10; i++){
        fprintf(file, "Marcos Vinicius Mota Menezes\n");
    }

    fclose(file);
}

int main()
{

    criarArquivo("story.txt");

    FILE * entrada = fopen("story.txt", "r");
    FILE * saida = fopen("numStory.txt", "w");

    if(entrada == NULL){
        printf("A leitura do arquivo de entrada falhou\n");
        return -1;
    }

    if(saida == NULL){
        printf("A leitura do arquivo de saida falhou\n");
        return 0;
    }

    int n = 1;
    fprintf(saida, "%2d - ", n);
    char l = fgetc(entrada);

    while(!feof(entrada)){

        fprintf(saida,"%c", l);
        if(l == '\n'){
            l = fgetc(entrada);
            n++;
            if(!feof(entrada))
                fprintf(saida ,"%2d - ", n);
            continue;
        }

        l = fgetc(entrada);
    }

    fclose(saida);
    fclose(entrada);





    return 0;
}
