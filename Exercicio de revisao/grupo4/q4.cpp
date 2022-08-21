#include <iostream>
#include <cstdlib>

using namespace std;

void lerVetor(double *vetor, int tam)
{
    for(int i = 0; i < tam; i++)
    {   
        cin >> vetor[i];
    }
}
int main()
{   

    int tam;
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    //O correto nesse caso é usar alocação dinâmica, mas alguns compiladores permitem declarar um vetor de um tamanho variado
    double *vetor = (double*) malloc(tam * sizeof(double));
    //double vetor[tam];


    lerVetor(vetor, tam);

    cout << "====================================\n";
    
    for(int i = 0; i < tam; i++)
    {
        cout << vetor[i] << endl;
    }

    free(vetor);


    return 0;
}