#include <iostream>

using std::cout;
using std::cin;
using std::string;

struct Horario
{
    int horas, minutos;
    void toString();
    Horario(int, int);
};

Horario::Horario(int h, int m)
{
    horas = h;
    minutos = m;
}

void Horario::toString()
{

    if(horas > 12)
    {
        cout << horas - 12 << ":" << minutos << " PM";
    }
    else
    {
        cout << horas << ":" << minutos << " AM";
    }
}

int main()
{

    int hora, minuto;

    char opcao;

    do
    {
        cin >> hora >> minuto;
        Horario hr(hora, minuto);

        hr.toString();
        cout << "Novamente? [s / n]: ";
    }while(opcao != 'n');
    return 0;
}
