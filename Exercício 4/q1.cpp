#include <iostream>

using std::cout;
using std::cin;

void getDados(double[]);
double calcularTaxa(const double);
void imprimirValores(const double[]);

int main()
{

    double tempCliente[3];
    char opcao;

    do{
        getDados(tempCliente);
        imprimirValores(tempCliente);
        cout << "Outra vez? [s/n]: ";
        cin >> opcao;
    }while(opcao == 's' || opcao == 'S');
    return 0;
}

void imprimirValores(const double __tempClientes[])
{
    double totalHrs = 0, totalTax = 0;
    for(int i = 0; i < 3; i++)
    {
        cout.precision(2);
        cout << std::fixed << "Carro " << i + 1 << "  " << __tempClientes[i] << "hrs de permanencia, taxa de R$ " << calcularTaxa(__tempClientes[i]) << std::endl;
        totalHrs += __tempClientes[i];
        totalTax += calcularTaxa(__tempClientes[i]);
    }

    cout << "TOTAL: HORAS[" << (int) totalHrs << "] / TAXAS[R$ " << totalTax << "]\n";
}
double calcularTaxa(const double tempo)
{
    if(tempo <= 3)
        return 2.0;

    double valor = 2 + (tempo - 3) * 0.5;
    return valor > 10 ? 10 : valor;
}

void getDados(double __array[])
{
    for(int i = 0; i < 3; i++)
    {
        cout << "Digite o tempo de permanencia do " << i + 1 << "o cliente: ";
        cin >> __array[i];
    }
}
