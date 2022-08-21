#include <iostream>

using std::cout;
using std::cin;

double celsiusToFahrenheit(const double);
double fahrenheitToCelsius(const double);

int main()
{

    cout.precision(2);
    cout << "========================C para F ======================\n";
    cout << std::endl;
    for(int i = 0; i <= 100; i++)
    {
        cout << std::fixed << i << " celsius eh: " << celsiusToFahrenheit(i) << " F\n";
    }
    cout << std::endl;
    cout << "========================F para C=======================\n";
    cout << std::endl;
    for(int i = 32; i <= 212; i++)
    {
        cout << std::fixed << i << " fahrenheit eh: " << fahrenheitToCelsius(i) << "C\n";
    }
    cout << std::endl;
    cout << "=========================FIM============================\n";

    return 0;
}

double celsiusToFahrenheit(const double __celsius_temperature)
{
    return (__celsius_temperature * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(const double __fahrenheit_temperature)
{
    return (__fahrenheit_temperature - 32) * 5.0 / 9.0;
}
