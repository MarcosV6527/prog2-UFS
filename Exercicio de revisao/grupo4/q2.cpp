#include <iostream>

using namespace std;

int main()
{

    int vetor[10];

    for(int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(vetor[i] > vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }   

    cout << "=======================================\n";

    for(int i = 0; i < 10; i++)
    {
        cout << vetor[i] << endl;
    }


    return 0;
}