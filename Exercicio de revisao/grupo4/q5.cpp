#include <iostream>

using namespace std;

int main()
{

    int vetor[10];

    cout << "===========================================\n\n";
    cout << "Informe os valores: \n";

    for(int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
    }

    cout << "===========================================\n\n";

    double media = 0;

    for(int i = 0; i < 10; i++)
    {
        media += vetor[i];
    }

    media /= 10;
    cout << "Média: " << media << "\n\n";
    cout <<  "===========================================\n\n";
    cout << "Valores acima da média: \n";

    for(int i = 0; i < 10; i++)
    {
        if(vetor[i] == media)
        {
            cout << vetor[i] << endl;
        }
    }

    cout <<  "===========================================\n";

    return 0;
}
