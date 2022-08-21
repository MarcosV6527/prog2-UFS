#include <iostream>

using namespace std;

int fatorialRecursivo(int num)
{
    return num > 1 ? fatorialRecursivo(num - 1) * num : num;
}

int calcularFatorial(int num)
{
    int r = 1;
    for(int i = 2; i < num; i++)
    {
        r *= i;
    }
    return r * num;
}

int main()
{
    int num;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> num;

    cout.precision(20);

    cout << "Laço: " << calcularFatorial(num) << endl;
    cout << "Recursiva: " << fatorialRecursivo(num) << endl;

    return 0;
}
