#include <iostream>
#include <cstdlib>
using namespace std;

double calcularValorParcela(double valor, int parcelas, double juros)
{
    double temp = valor / parcelas;
    temp += temp * (juros / 100);
    return temp;
}

int numeroDeParcelas()
{
    cout << "Entre com o numero de parcelas: ";
    int parcelas;
    cin >> parcelas;

    if(parcelas > 10 || parcelas < 3)
    {
        cout << "Digite um valor entre 3 e 10: \n";
        return numeroDeParcelas();
    }  

    return parcelas;

}
double formaDePagamento(double valor)
{   
    system("cls");
    cout << "Valor da compra: " << valor << "\nSelecione sua forma de pagamento\n\n";
    cout << "1- A vista com 10% de desconto\n";
    cout << "2- Em duas vezes {Preco original}\n";
    cout << "3- De até 10 vezes com juros de 3% ao mes (somente compras maiores que 100 reais)\n";
    cout << ">>>";

    int opcao;

    cin >> opcao;

    if(opcao == 1)
    {
        return valor - (valor * 0.1);
    }
    
    if(opcao == 2)
    {
        return valor / 2;
    }

    if(opcao == 3)
    {
        if(valor <= 100)
        {
            cout << "Valido somente para comprar maiores q 100 reais\n";
            return formaDePagamento(valor);
        }
        return calcularValorParcela(valor, numeroDeParcelas(), 3);
    }

    return formaDePagamento(valor);
}

int main()
{   

    system("cls");
    double valor;
    cout << "Digite o preco da peça: ";
    cin >> valor;

    cout << "Valor das Parcelas: " << formaDePagamento(valor);


    return 0;
}