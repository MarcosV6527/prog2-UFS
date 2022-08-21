#include <iostream>

using namespace std;

double calcularPotencia(double num, int potencia)
{
    double resultado = 1;
    for(int i = 0; i < potencia; i++)
    {   
        resultado *= num;
    }
    return resultado;
}

int main()
{

    double num;
    int potencia;

    cout << "Digite um valor: ";
    cin >> num;
    cout << "Digite a potencia: ";
    cin >> potencia;

    cout << "Resultado: " << calcularPotencia(num, potencia);



    return 0;
}