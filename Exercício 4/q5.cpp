#include <iostream>

using namespace std;


void calculaMoedas(int valorDaMoeda, int & numero, int & valorRestante)
{
    numero = 0;
    while(valorRestante - valorDaMoeda >= 0)
    {
        numero++;
        valorRestante -= valorDaMoeda;
    }

}

int main()
{
    int valorDaMoeda;
    int numero;
    int valorRestante;

    cin >> valorRestante;

    int moedas25, moedas10, moedas1;

    calculaMoedas(25, moedas25, valorRestante);
    calculaMoedas(10, moedas10, valorRestante);
    calculaMoedas(1, moedas1, valorRestante);

    cout << moedas25 << " moedas de 25 cents, " << moedas10 << " moedas de 10 cents,  " << moedas1 << " moedas de 1 cent " << std::endl;
    return 0;
}
