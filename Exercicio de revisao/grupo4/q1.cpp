#include <iostream>

using namespace std;

int main()
{

    int menor, maior;
    int num;

    cin >> num;
    menor = num;
    maior = num;

    for(int i = 1; i < 10; i++)
    {
        cin >> num;
        if(num < menor)
            menor = num;
        if(num > maior)
            maior = num;
    }

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;

    return 0;
}
