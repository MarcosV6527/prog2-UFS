#include <iostream>

using std::cout;
using std::cin;

typedef struct
{
    int hours, minutes, seconds;
    int hoursToSeconds();

}Horario;

Horario secondsToHours(int seconds)
{
    int horas = 0;
    int minutes = 0;

    while(seconds - 3600 >= 0)
    {
        horas++;
        seconds -= 3600;
    }

    while(seconds - 60 >= 0)
    {
        minutes++;
        seconds -= 60;
    }

    Horario h;
    h.hours = horas;
    h.minutes = minutes;
    h.seconds = seconds;

    return h;
}


int Horario::hoursToSeconds()
{
    int total = 0;
    total += seconds;
    total += minutes * 60;
    total += hours * 60 * 60;
    return total;
}

double mod(double v)
{
    return v < 0 ? v * - 1 : v;
}
int main()
{
    cout << "Subtração de horários\n";
    Horario h1, h2;

    cout << "Digite o primeiro horario [hh mm ss]: ";
    cin >> h1.hours >> h1.minutes >> h1.seconds;

    cout << "Digite o segundo horario [hh mm ss]: ";
    cin >> h2.hours >> h2.minutes >> h2.seconds;
    int dif = mod(h1.hoursToSeconds() - h2.hoursToSeconds());

    cout << "Diferenca: " << dif << " segundos\n";

    Horario d = secondsToHours(dif);
    cout << "Diferenca em horas: " << d.hours << ":" << d.minutes << ":" << d.seconds;


    return 0;
}
