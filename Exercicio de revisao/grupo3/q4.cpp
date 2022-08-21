#include <iostream>

using namespace std;

int main()
{   


    int num1, num2;
    char operador;

    cout << "Digite o primeiro valor: ";
    cin >> num1;

    cout << "Digite o operador: ";
    cin >> operador;

    cout << "Digite o segundo valor: ";
    cin >> num2;

    if(operador == '+')
    {
        cout << num1 + num2;
    }
    else if(operador == '-')
    {
        cout << num1 - num2;
    }
    else if(operador == '*')
    {
        cout << num1 * num2;
    }
    else if(operador == '/')
    {
        cout << (double) num1 / (double) num2;
    }

    return 0;
}